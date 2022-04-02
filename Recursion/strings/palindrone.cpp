#include<iostream>
#include <string>

using namespace std;


bool Palindrone1(string str,int s){
    if(s>str.size()-1-s){
        return true;
    }else if(str[s]==str[str.size()-1-s]){
        s++;
        return Palindrone1(str,s);
    }
    return false;
}


bool Palindrone(string str,int s,int e){
    if(s>e){
        return true;
    }else if(str[s]==str[e]){
        s++;
        e--;
        return Palindrone(str,s,e);
    }
    return false;
}

int main(){
    string str="abbac";
    int s=0;
    int e=str.size()-1;
    cout<<Palindrone(str,s,e)<<endl;
    cout<<Palindrone1(str,s)<<endl;
}