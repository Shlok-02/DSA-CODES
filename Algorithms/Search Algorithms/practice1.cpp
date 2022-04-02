#include <iostream>
using namespace std;
int BinarySearch(int myarr[], int x, int left, int right)
{
    while (left <= right)
    {
        int m = left + (right-left) / 2;
        if (myarr[m] == x)
        {
            return m;
        }
        else if (myarr[m] < x)
        {
            left = m + 1;
        }
        else
        {
            right = m - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5];
    cout << "Enter 5 numbers in ascending order: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number which is to be find: " << endl;
    cin >> num;
    int output = BinarySearch(arr, num, 0, 4);
    if (output == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "element found " << endl;
    }
}