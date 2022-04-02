//Optimised bubble sort
//time complexity is o(n**2)

#include <iostream>
using namespace std;
void OptimisedBubbleSort(int a[])
{
    int round=0;

    for(int i=0;i<5;i++)
    {
        round++;
        int flag=false;
        for(int j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=true;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if (flag==false)
        {
            break;
        }
    }
    cout<<"Rounds required: "<<round<<endl;
}
int main()
{
    cout<<"Enter 5 numbers in random order: "<<endl;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    OptimisedBubbleSort(arr);
    cout<<"After Bubble Sort : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}






//Normal Bubble sort
#include<iostream>
using namespace std;

void BubbleSort(int arr[])
{
   int round;
    for (int i=0;i<5;i++)
    {
        round++;
    
        for (int j=0;j<(5-i-1);j++)
        {
            if (arr[j]>arr[j+1])
            {

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    cout<<"Number of rounds are : "<<round<<endl;
}

int main()
{
    int myarr[5];
    cout<<"Enter 5 numbers in random order"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>myarr[i];
    }
    BubbleSort(myarr);
    cout<<"After using bubble sort:"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<myarr[i]<<" ";
    }

}

/*
#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<(n-i-1);j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int num;
    cout<<"Enter the number of elements to be present in array: ";
    cin>>num;
    int myarr[num];
    cout<<"Enter  numbers in random order"<<endl;
    for (int i=0;i<num;i++)
    {
        cin>>myarr[i];
    }
    BubbleSort(myarr, num);
    cout<<"After using bubble sort:"<<endl;
    for (int i=0;i<num;i++)
    {
        cout<<myarr[i]<<" ";
    }

}
*/
