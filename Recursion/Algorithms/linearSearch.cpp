#include<iostream>
using namespace std;

int linearSearch(int arr[],int target,int size){
    if(size==0)
        return -1;
    if(arr[0]==target)
        return 1;
    else{
       int ans= linearSearch(arr+1,target,size-1);
       return ans;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<linearSearch(arr,4,5)<<endl;
}