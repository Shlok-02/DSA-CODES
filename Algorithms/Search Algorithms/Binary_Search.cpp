#include <iostream>
using namespace std;

int BinarySearch(int arr[], int right, int left, int x)
{
    while (left <= right)
    {
        int midvalue = left + (right - left) / 2;
        if (arr[midvalue] == x)
        {
            return midvalue;
        }
        else if (arr[midvalue] < x)
        {
            left = midvalue + 1;
        }
        else
        {
            right = midvalue - 1;
        }
    }
    return -1;
}
int main()
{

    int num;
    int arr[10];
    cout << "Enter 10 nums in ascending order : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Number you want to search: " << endl;
    cin >> num;

    int output;
    output = BinarySearch(arr, 9, 0, num);

    if (output == -1)
    {
        cout << "Entered number is not available " << endl;
    }
    else
    {
        cout << "Match Found at : " << output << endl;
    }
}