#include<bits/stdc++.h>
using namespace std;

int sReverse(int n){
    string s=to_string(n);

    int i=0;
    int j=s.length()-1;

    while(i<j){
        swap(s[i],s[j]);

        i++;
        j--;
    }

    stringstream ss(s);
    int x=0;
    ss>>x;

    return x;
}

int iReverse(int n){
    int ans=0,reverseNumber=0;

    while(n!=0){
        int digit=n%10;
        reverseNumber=10*reverseNumber+digit;
        n=n/10;
    }
    //cout<<reverseNumber<<endl;
    return reverseNumber;
}


int main(){
    cout<<sReverse(9871)<<endl;
    cout<<iReverse(9871)<<endl;
}