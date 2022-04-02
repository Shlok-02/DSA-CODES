#include <iostream>
using namespace std;

int sum(int n){
   if(n>0){
       return n+sum(n-1);
   }
   return 0;

}

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int SumElement(int arr[],int size){
    
    if(size==0){
        return 0;
    }else{
        int ans=arr[0]+SumElement(arr+1,size-1);
        return ans;
    }
}

int main(){
    cout<<fact(1)<<endl;
    cout<<sum(50)<<endl;
    int arr[5]={3,17,98,33,45};
    int size=5;
    cout<<SumElement(arr,size)<<endl;
}