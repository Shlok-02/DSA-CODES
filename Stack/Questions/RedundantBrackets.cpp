





/* 
  Sample Input 1 :
    2
    (a+b)
    (a+c*b)+(c))

    Sample Output 1 :
        No
        Yes 
*/





#include <stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    
    //loop to iterate the string
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        
        if(ch=='+' or ch=='-' or ch=='/' or ch=='*' or ch=='('){
            //push the operators and open brakets in stack
            st.push(ch);
        }else{
            if(ch==')'){
                 //checks if the ch is closing bracket
                bool isRedundant=true; //to the value
                //to check if the current closing bracket is redudant or not
                //the logic to traverse the stack till we get a open bracket and if between them we get operators then false or true
                
                while(st.top!='('){
                    char top=st.top();
                    if(top=='+' or top=='-' or top=='/' or top=='*'){
                        isRedundant=false;
                    }
                    s.pop(); //
                }
                if(isRedundant==true)//string have redundant brackets
                    return true;
                st.pop(); //to remove the opening bracket
            }
        }
    }
    return false;//current string have no redundant brackets
}
