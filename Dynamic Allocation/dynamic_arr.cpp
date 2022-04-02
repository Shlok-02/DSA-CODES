#include<iostream>
using namespace std;

int Sum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

void Print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size;
    cin>>size;

    int *arr=new int[size]; //arr us created dynamically

    cout<<"Enter the element :- "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Elements are :- "<<endl;
    Print(arr,size);

    cout<<"Sum is:- "<<endl;
    cout<<Sum(arr,size)<<endl;

}