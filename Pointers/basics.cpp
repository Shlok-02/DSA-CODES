#include <bits/stdc++.h>
using namespace std;

int main(){
    int num=45;
    int *ptr=&num;

    cout<<*ptr<<endl; //prints the value
    cout<<&num<<endl; //prints the address
    cout<<ptr<<endl; //prints the address

    cout<<endl;
    //another way to intialize pointer
    int *p=0;
    p=&num;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;



    cout<<endl;
   
    (*ptr)++;
    cout<<num<<endl;


    cout<<endl;
    num++;
    cout<<(*ptr)<<endl;

    cout<<endl;
    int *p1=0;
    p1=ptr;
    cout<<p<<" "<<ptr<<" "<<&num<<endl;
    cout<<*p1<<" "<<*ptr<<endl;
    cout<<&p1<<" "<<&ptr<<endl;


    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;

}