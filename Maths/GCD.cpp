/* using euclid's algorithm
here we use gcd(a,b)=gcd(a-b,b) 
we use the same formula untill either of one para becomes 0 and the other para becomes alignas 
*/

#include<iostream>
using namespace std;

int GCD(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    cout<<GCD(24,72)<<endl;
}