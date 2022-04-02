#include<bits/stdc++.h>
using namespace std;


int LongestWordLength(string str)
{
     
    int n = str.length();
    int res = 0, curr_len = 0, i;
     
    for (int i = 0; i < n; i++) {
         
        
        if (str[i] != ' ')
            curr_len++;
 
       
        else {
            res = max(res, curr_len);
            curr_len = 0;
        }
    }
 
   
    return max(res, curr_len);
}



int main(){
    string str="My name is Shlkok";
    
    cout<<LongestWordLength(str)<<endl;
}