/* Input :  1 2 3 4
Output : 1 3 2 4

Input : 11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20

https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/ */


#include<bits/stdc++.h>
using namespace std;


//Approach 1
void InterLeave(queue<int>&q){
    int length=q.size();
    
    int mid=length/2;

    queue<int>temp;

    while(mid--){
        temp.push(q.front());
        q.pop();
    }

    int arr[length]={0};

    for(int i=0;i<length;i++){
        if(i%2==0){
            arr[i]=temp.front();
            temp.pop();
        }else{
            arr[i]=q.front();
            q.pop();
        }
    }

    for(int i=0;i<length;i++){
        q.push(arr[i]);
    }

}


//Approach 2
void Interleave2(queue<int>&q){
    stack<int>s1;
    stack<int>s2;

    int length=q.size();
    
    int mid=length/2;

    queue<int>temp;

    while(mid--){
        s1.push(q.front());
        q.pop();
    }

    while(!s1.empty()){
        //cout<<s1.top()<<endl;
        s2.push(s1.top());
        s1.pop();
    }
    

    /* while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    } */
    while(!s2.empty()){
        q.push(s2.top());
        s2.pop();
        int val=q.front();
        q.pop();
        q.push(val);
    }

}

int main(){
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    q.push(21);
    Interleave2(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}