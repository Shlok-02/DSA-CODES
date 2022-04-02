#include<bits/stdc++.h>
using namespace std;


class Queue{
    private:
        int size;
        int front;
        int rear;
        int *arr;

    public:

    Queue(int s){
            size=s;
            front=rear=0;
            arr=new int[size];
    }

    bool isFull(){
        if(rear==size-1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        return false;
    }

    void Enqueue(int data){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
        }else{
            arr[rear]=data;
            rear++;
            cout<<"Element pushed successfully"<<endl;
        }
    }

    int Deqeueue(){
        if(isEmpty()){
            return -1;
        }else{
            int ans= arr[front];
            arr[front]=-1;
            front++;
            //cout<<"Front Element successfully popped"<<endl;
            return ans;
        }
    }

    int Front(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }
};


int main(){
    Queue q1(10);
    q1.Enqueue(5);
    q1.Enqueue(1);
    q1.Enqueue(3);
    q1.Enqueue(53);
    q1.Enqueue(52);

    while(!q1.isEmpty()){
        cout<<q1.Front()<<" ";
        q1.Deqeueue();
    }
}