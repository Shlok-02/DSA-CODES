//Time complexity is O d(n+k)--linear  : n= number of elements , k-=range of input, d=number of digits
//Space complexity is O(n+k)
//similar to counting to an extent
#include <iostream>
using namespace std;
int MaxValue(int myarr[], int size)
{
    int max = myarr[0];
    for (int i = 1; i < size; i++)
    {
        if (myarr[i] > max)
        {
            max = myarr[i];
        }
    }
    return max;
}
void CountingSort(int arr[], int size, int div)
{
    int output[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
        count[(arr[i] / div) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void RadixSort(int arr[], int size)
{
    int m = MaxValue(arr, size);
    for (int div = 1; m / div > 0; div *= 10)
    {
        CountingSort(arr, size, div);
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " integers in any order" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Before Sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    RadixSort(arr, size);

    cout << endl
         << "After Sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}