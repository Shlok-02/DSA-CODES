#include <iostream>
using namespace std;


int binarySearch(int arr[],int l,int r,int target){
    int mid=r+(l-r)/2;

    if(arr[mid]==target)
        return mid;

    if(l>r)
        return -1;

    if(target<arr[mid]){
        int ans=binarySearch(arr,l,mid-1,target);
        return ans;
    }
    else{
        int ans=binarySearch(arr,mid+1,r,target);
        return ans;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binarySearch(arr,0,4,10)<<endl;
}
