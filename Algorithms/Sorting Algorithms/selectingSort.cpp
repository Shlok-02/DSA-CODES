//time complexity is o(n**2)
#include <iostream>
using namespace std;

void SelectionSort(int arr[])
{
    int min;
    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    cout << "Enter 5 numbers in Unordered form: " << endl;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Unordered Form of the array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    SelectionSort(arr);
    cout << "Ordered form of the array is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

/*
#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)

        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int num;
    cout << "Enter the numbers of elements to be present in the array:" << endl;
    cin >> num;

    cout << "Enter  numbers in Unordered form: " << endl;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Unordered Form of the array is :" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }

    SelectionSort(arr, num);
    cout << "Ordered form of the array is " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
*/