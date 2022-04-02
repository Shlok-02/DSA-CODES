//Time complexity is o(nlog(n))
#include <iostream>
using namespace std;

void Merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int temp[5];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (r + l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        Merge(arr, l, m, r);
    }
}

int main()
{
    int myarr[5];
    cout << "Enter the values for arrays: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Before applying merge sort: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;

    MergeSort(myarr, 0, 4);
    cout << "After applying Merge Sort : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
}
