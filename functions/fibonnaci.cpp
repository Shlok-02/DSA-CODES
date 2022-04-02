#include<bits/stdc++.h>
using namespace std;



void fibonacci(int n){
    int a=0;
    int b=1;
    n=n-2;
    cout<<a<<" "<<b<<" ";
    while(n!=0){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        n--;
    }
}


int main(){
    fibonacci(5);
}