//linera search in user defined array

#include <iostream>
using namespace std;
void LinearSearch(int a[], int num, int number)
{
    int temp = 0;
    for (int i = 0; i < number; i++)
    {
        if (a[i] == num)
        {
            cout << "Element found at position " << i + 1 << " OR "
                 << "Element found at Index number " << i << endl;
            temp = 1;
        }
    }
    if (temp == 0)
    {
        cout << "Element not found" << endl;
    }
}
int main()
{
    int number;
    cout << "Enter the number of elements to be present in array : ";
    cin >> number;

    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter the numbers in array : ";
        cin >> arr[i];
    }
    int input;
    cout << "Enter the number to Search in Array : " << endl;
    cin >> input;

    LinearSearch(arr, input, number);
}

/*
//linear search in pre defined array
#include <iostream>
using namespace std;
void linearSearch(int a[], int num)

{
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == num)
        {
            cout << "Elemeny found at position " << i + 1 << "Index position in array is " << i << endl;
            temp = 1;
        }
    }
    if (temp == 0)
    {
        cout << "Element not found" << endl;
        temp = 0;
    }
}
int main()
{
    int arr[5] = {12, 80, 78, 90, 123};
    int num;
    cout << "Enter the number to search from the array" << endl;
    cin >> num;
    linearSearch(arr, num);
}*/