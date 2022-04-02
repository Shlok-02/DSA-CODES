//time complexity is o(n**2)

#include <iostream>
using namespace std;
void InsertionSort(int arr[])
{
    int key = 0;        
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
int main()
{
    int array[5];
    cout << "Enter 5 numbers in unorderd form is:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    InsertionSort(array);
    cout << "Sorted array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
}
