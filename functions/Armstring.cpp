#include<bits/stdc++.h>
using namespace std;

int isArmstrong(int n){
    int ans=0;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        int temp=pow(digit,3);
        ans+=temp;
    }

    return ans;
}

int main(){
    int n=153;
    int ans=isArmstrong(n);
    cout<<ans<<endl;
    if(n==ans){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not"<<endl;
    }
    
}