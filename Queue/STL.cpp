#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout<<"The front of Queue is:-"<<q.front()<<endl;

    q.pop();
     cout<<"The front of Queue is:-"<<q.front()<<endl;

    cout<<"The size of queue is:- "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queue is not Empty"<<endl;
    }

    cout<<"The elements of queue are:- "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}