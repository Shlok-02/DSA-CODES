#include <iostream>
using namespace std;
void ShellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {
            int temp = arr[j];
            int i = 0;
            for (i = j; arr[i - gap] > temp && i >= gap; i = i - gap)
            {
                arr[i] = arr[i - gap];
            }
            arr[i] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int array[n];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Before Shell Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    ShellSort(array, n);
    cout << "After Shell Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}