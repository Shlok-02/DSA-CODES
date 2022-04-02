/* print the given matrix in sine wave form

given input
1 2 3 4
5 6 7 8
9 10 11 12

output
1 5 9 10 6 2 3 7 11 12 8 4
 */

#include<iostream>
using namespace std;

void PrintSineWave(int arr[][3],int nRows,int mCols){
    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }else{
            for(int row=0;row<nRows;row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main(){
    int row=3;
    int col=3;

    int arr[3][3];

    for(int i=0;i<3;i++){
		 for(int j=0;j<3;j++){
			 cin>>arr[i][j];
		 }
	 }
    PrintSineWave(arr,3,3);
}
