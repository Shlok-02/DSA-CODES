#include <iostream>
using namespace std;



void Ifibonnacci(int a,int b,int n){
    //cout<<0<<" "<<1<<" ";
    int ans=0;
    while((n-2)>0){
        int c=b;
        b=a+b;
        a=c;
        ans=b;
        n--;
    }
    cout<<ans<<endl;
}


int Rfibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int ans=Rfibonacci(n-1)+Rfibonacci(n-2);
    return ans;
    
}

int main(){
    Ifibonnacci(0,1,8);
    cout<<Rfibonacci(3)<<endl;
}