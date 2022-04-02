#include<iostream>
#include<stack>
using namespace std;



int main(){
     stack<int> s;
    //push operation
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    //pop
    s.pop();


    //getting top element in stack
    cout << "Printing top element " << s.top() << endl;

    s.pop();

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }
    cout << "size of stack is " << s.size() << endl;

     cout << "Printing top element " << s.top() << endl;
    //print elements of stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    
}