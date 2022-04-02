#include <bits/stdc++.h>
using namespace std;

int main(){
 /*    int arr[5]={1,2,3,4,5};

    int *ptr=NULL;
    ptr=&arr[0];

    cout<<"Address of arr:- "<<ptr<<"  "<<&arr[0]<<"  "<<arr<<endl;
    cout<<"Value:- "<<*ptr<<"  "<<arr[0]<<endl;
    cout<<"Address of pointer:- "<<&ptr<<endl;


    cout<<"Address of each indexs in arr:- "<<endl;
    for(int i=0;i<5;i++){
        cout<<"Index "<<i<<" ----> "<<&arr[i]<<endl;
    }

     cout<<"values of each indexs in arr:- "<<endl;
    for(int i=0;i<5;i++){
        // here *arr prints the value at 0th index and we add i so we can print values of other indexes
        cout<<"Index "<<i<<" ----> "<<*arr+i<<endl;
    }

    cout<<(*arr)+2<<endl;
    
    //arr[i]=*(arr+i)
    //another similiar to above is:-  i[arr]=*(arr+i)

    cout<<2[arr]<<endl;


    cout<<"Address of pointer:- "<<&ptr<<endl;
    cout<<"Value in ptr:- "<<(*ptr)<<endl;
    cout<<"address in pointer:- "<<(ptr)<<endl;

    //different representations
    cout<<"Address of arr:- "<<&arr<<endl;
    cout<<"Address of arr:- "<<arr<<endl;
    cout<<"Address of arr:- "<<&arr[0]<<endl;


    //ERROR
   //arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl; */

    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" "<<endl;
  cout<<ptr2<<endl;
  cout<<ptr1 << endl;
  cout<<*ptr1<<endl;
  cout<<*ptr2<<endl;
  cout<< ptr2 - ptr1;
  return 0;

}