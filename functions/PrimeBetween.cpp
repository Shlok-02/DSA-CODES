#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void PrimeNosBetween(int a,int b){
    vector<int>ans;

    for(int i=a;i<b+1;i++){
        if(isPrime(i)){
            ans.push_back(i);
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){
    PrimeNosBetween(2,40);
}