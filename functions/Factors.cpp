#include<bits/stdc++.h>
using namespace std;

void Facotrs(int n){
    
    vector<int>ans;

    for(int i=1;i<n+1;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }

    cout<<endl;
}


int main(){
    Facotrs(35);
}