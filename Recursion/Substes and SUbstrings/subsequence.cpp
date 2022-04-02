#include <bits/stdc++.h>
using namespace std;


void solve(string str,vector<string>&ans,string output,int index){
    if(index>=str.length()){
        if(output.length()>0){
            ans.push_back(output);
        }
        return ;
    }
    
    //exclude the char
    solve(str,ans,output,index+1);
        
     //include the char
    char ele=str[index];
    output.push_back(ele);
    solve(str,ans,output,index+1);
}


vector<string> subsequences(string str){
	
	vector<string>ans;
  	 string output;
    int index=0;
    solve(str,ans,output,index);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return ans;
	
}

int main(){
    subsequences("abc");
}
