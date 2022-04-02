#include<bits/stdc++.h>
using namespace std;

/* Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.


[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
] */



bool isOptimisePresent(int arr[][3],int target){
    //we will start from top right corner

    int r=0,c=3;

    while(r<4 && c>0){
        if(arr[r][c]==target)
            return true;

        else if(arr[r][c]>target){ //if target is gretaer then column -- else row++
            c--;
        }else{
            r++;
        }
    }
    return false;
}


bool isPresent(int arr[][3],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]=target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=5;

    if(isPresent(arr,target))
        cout<<"Present"<<endl;
    else
        cout<<"Not present"<<endl;

    if(isOptimisePresent(arr,target))
        cout<<"Present"<<endl;
    else
        cout<<"Not present"<<endl;
}