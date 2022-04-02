#include<bits/stdc++.h>
using namespace std;


void Print(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void Transpose(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    Print(arr);
    
}



int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Print(arr);
    Transpose(arr);
    cout<<endl;
    Print(arr);
}