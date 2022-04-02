#include<iostream>
using namespace std;

void PassByValue(int n){
    //new copy of n is created i.e new memory is allocated
    n++;
}

void PassByReference(int &n){
    //here already avaiable memory is used
    n++;
}

int& RetReference(int &n){
    n++;
    return n;
}

/* int& func(int a) {
    //bad practice as both the value ans and num are locall so we cannot return them and use outside
    int num = a;
    int& ans = num;
    return ans;
} */

int main(){
    /* int i=5;
    int &j=i;  //here j is a reference variable

    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;

    j++;
    cout<<i<<endl;
    cout<<j<<endl; */

    int i=5;

    cout<<"pass by value"<<endl;
    cout<<"Before :- "<<i<<endl;
    PassByValue(i); //pass by value
    cout<<"After :- "<<i<<endl;

    cout<<endl;

    cout<<"pass by reference"<<endl;
    //pass by reference
    cout<<"Before :- "<<i<<endl;
    PassByReference(i); //pass by reference
    cout<<"After :- "<<i<<endl;

    cout<<RetReference(i)<<endl;

}