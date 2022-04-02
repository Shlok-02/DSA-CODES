#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Under flow" << endl;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack is Under flow" << endl;
        }
        else
        {
            cout << "The value at position " << pos << "is" << arr[pos] << endl;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int change(int pos, int val)
    {
        arr[pos] = val;
        cout << "The value at psition " << pos << "is changed" << endl;
    }
    int display()
    {
        cout << "The values of Stack are " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Stack s1;
    int option, value, position;
    do
    {
        cout << "Enter the options to perform the command on your data ....... Press 0 to exit" << endl;
        cout << "1.Push()" << endl;
        cout << "2.Pop()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.Peek()" << endl;
        cout << "6.Count()" << endl;
        cout << "7.change()" << endl;
        cout << "8.display()" << endl;
        cout << "9.clear screen" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter the value to insert" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop function is called -- "
                 << "Pop value is " << value << " " << s1.pop() << endl;
            break;
        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is not Empty" << endl;
            }
        case 4:

            if (s1.isFull())
            {
                cout << "Stack is Full" << endl;
            }
            else
            {
                cout << "Stack is not Full" << endl;
            }
            break;
        case 5:
            cout << "Enter the Position of data which is to be accessed " << endl;
            cin >> position;
            cout << "Peek Function is called--" << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count Function is called -- "
                 << "Number of items in the Stack are " << s1.count() << endl;
            break;
        case 7:
            cout << "Enter the positon of the data to be changed " << endl;
            cin >> position;
            cout << endl;
            cout << "Enter the new value " << endl;
            cin >> value;
            cout << endl;
            cout << "The new value at position is " << s1.change(position, value) << endl;
            break;
        case 8:
            cout << "The information about is as follows " << s1.display() << endl;
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Select the proper option" << endl;
        }

    } while (option != 0);
}
