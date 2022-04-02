#include <iostream>
using namespace std;

void RowSum(int arr[][3],int m,int n){
    cout<<"Row Sum"<<endl;
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
		sum=0;
	}
}



void printColSum(int arr[][3], int row, int col) {
    cout << "Column Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum <<endl;
    }

    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main() {

	int mrow=3,ncol=3;

 	int arr[mrow][3];

	 for(int i=0;i<mrow;i++){
		 for(int j=0;j<ncol;j++){
			 cin>>arr[i][j];
		 }
	 }
    printColSum(arr, 3, 3 );
	RowSum(arr,mrow,ncol);
	cout<<largestRowSum(arr,mrow,ncol)<<endl;
}
