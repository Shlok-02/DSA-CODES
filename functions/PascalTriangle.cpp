/*
1
1 1
1 2 1
1 3 3 1
 */

#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    if(n==1){
        return 1;
    }else{
        int ans=n*factorial(n-1);
        return ans;
    }
}

void Pascals(int n){
    for(int i=0;i<n;i++){
        for(int j=0;i<n;i++){
            int ans=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}


int main(){
    //Pascals(5);
    factorial(4);
}