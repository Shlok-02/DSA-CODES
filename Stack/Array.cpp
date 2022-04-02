#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int size;
        int *arr;
    public:
    Stack(int s){
        size=s; //size of arr which is needed
        arr=new int[size];
        top=-1;
    }

    void push(int data){
        if(size-top>=1){
            top++;
            arr[top]=data;
            cout<<"Push successfull"<<endl;
        }else{
            cout<<"Stack is full"<<endl;
        }
    }

    void pop(){
        if(top>0){
            arr[top]=-1;
            top--;
            cout<<"Pop successfull"<<endl;
        }else{
            cout<<"Stack is empty"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top>=0){
            cout<<"Stack not empty"<<endl;
            return false;
        }else{
            cout<<"Stack is empty"<<endl;
            return true;
        }
    }


};


int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.isEmpty();
}