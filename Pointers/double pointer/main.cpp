#include <bits/stdc++.h>
using namespace std;

int main(){

    int i=5;
    int* ptr=&i;
    int** ptr2=&ptr;
    
    cout<<endl;

    cout<<"Value of i is:- "<<i<<endl;
    cout<<"Address of i is:- "<<&i<<endl;

    cout<<endl;

    cout<<"Value in ptr is:- "<<*ptr<<endl;
    cout<<"addres in ptr is:- "<<ptr<<endl;
    cout<<"address of ptr is:- "<<&ptr<<endl;

    cout<<endl;

    cout<<"value in *ptr2 is:-"<<*ptr2<<endl;
    cout<<"Value in **ptr2 is :- "<<**ptr2<<endl; //it actually prints the value in *ptr
    cout<<"addres in ptr2 is:- "<<ptr2<<endl;
    cout<<"address of ptr2 is:- "<<&ptr2<<endl;

    cout<<endl;
}