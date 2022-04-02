#include<bits/stdc++.h>
using namespace std;



void PythagorianTriplet(int a,int b,int c){
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    sort(ans.begin(),ans.end());

    int hypo=ans[2];
    hypo=hypo*hypo;
    cout<<hypo<<endl;
    int other=pow(ans[0],2)+pow(ans[1],2);
    cout<<other<<endl;
    if(hypo==other){
        cout<<"They are"<<endl;
    }else{
        cout<<"They are not"<<endl;
    }

}

int main(){
    PythagorianTriplet(5,1,4);
}