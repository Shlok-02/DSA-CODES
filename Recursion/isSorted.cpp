#include<iostream>
using namespace std;


bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        int ans=isSorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<isSorted(arr,5)<<endl;
}