#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

void rverse(int s,int e,string& str){
    if(s>e)
        return;
   	else{
        swap(str[s],str[e]);
        s++;
        e--;
        rverse(s,e,str);
    }
}


int main(){
    string str="shlok";
    rverse(0,str.size()-1,str);
    cout<<str<<endl;
}