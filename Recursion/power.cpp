#include <iostream>
using namespace std;


int Optimized(int a,int b){
    //here the number of iterations are reduced 
    if(b==0){
       return 1;
    }
    if(b%2==0){
       return Optimized(a,b/2)*Optimized(a,b/2);
    }else{
       return a*Optimized(a,b/2)*Optimized(a,b/2);
    }
}

int pow(int n,int m){
    if(m>0){
       return n*pow(n,m-1);
    }
   return 1;
}

int main(){

    cout<<pow(3,0)<<endl;
    cout<<Optimized(2,10)<<endl;
}