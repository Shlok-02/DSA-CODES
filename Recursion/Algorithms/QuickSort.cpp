#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot=arr[s];
    int counter=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            counter++;
        }
    }

    int pivotIndex=s+counter;
    //swap elements
    swap(arr[s],arr[pivotIndex]);

    while(s<pivotIndex && e>pivotIndex){
        while(arr[s]<arr[pivotIndex]){
            s++;
        }
        while(arr[e]>arr[pivotIndex])
            e--;
        
        if(s<pivotIndex && e>pivotIndex){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }

    return pivotIndex;
}





void quickSort(int arr[],int s,int e){


    //if s>e means arr have 0 or 1 elements then arr is sorted
    if(s>e){
        return;
    }

    int p=partition(arr,s,e); //returns the index

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}





int main(){
    int arr[]={3,1,4,6,2};
    int n=5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}