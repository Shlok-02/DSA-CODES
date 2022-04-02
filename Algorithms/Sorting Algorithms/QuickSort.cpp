//time complexity o(nlog(n))
//space complexity o(log(n))
//In place sorting algo means dont require extra array and space
#include <iostream>
using namespace std;
int Partion(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pindex = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp = arr[e];
    arr[e] = arr[pindex];
    arr[pindex] = temp;

    return pindex;
}
void QuickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = Partion(arr, s, e);
        QuickSort(arr, s, (p - 1));
        QuickSort(arr, (p + 1), e);
    }
}
x` int main()
{
    int myarr[5];
    cout << "Enter 5 numbers in random order: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << endl;
    cout << "Before QuickSort" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;
    QuickSort(myarr, 0, 4);
    cout << "After quicksort:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;
}