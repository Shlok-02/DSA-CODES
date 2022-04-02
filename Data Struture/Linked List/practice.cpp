#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }

    //To chech wheter node is present or absent
    Node *check(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    //Appending a node
    void Append(Node *n)
    {
        if (check(n->key) != NULL)
        {
            cout << "Node Already Exist " << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
            }
            cout << "Node Appended" << endl;
        }
    }
    //Prepending a node
    void Prepend(Node *n)
    {
        if (check(n->key) != NULL)
        {
            cout << "Node already exist" << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node Prepended" << endl;
        }
    }

    //Insertion
    void Insertion(int p, Node *n)
    {
        Node *temp = check(p);
        if (temp == NULL)
        {
            cout << "The position is not present " << endl;
        }
        else
        {
            if (check(n->key) != NULL)
            {
                cout << "Node already exist" << endl;
            }
            else
            {
                n->next = temp->next;
                temp->next = n;
                cout << "Node Inserted" << endl;
            }
        }
    }

    //Deletion

    void Deletion(int p)
    {
        if (head == NULL)
        {
            cout << "Linked is Empty" << endl;
        }
        else if (head != NULL)
        {
            if (head->key = p)
            {
                head = head->next;
                cout << "Head Deleted" << endl;
            }
            else
            {
                Node *current = head->next;
                Node *previous = head;
                Node *temp;
                while (current->next != NULL)
                {
                    if (current->key = p)
                    {
                        temp = current;
                        current = NULL;
                    }
                    else
                    {
                        previous = previous->next;
                        current = current->next;
                    }
                }
                if (temp != NULL)
                {
                    previous->next = temp->next;
                    cout << "Linking chnage and node is also removed" << endl;
                }
                else
                {
                    cout << "Node Does not exist" << endl;
                }
            }
        }
    }
    //Change
    void ChangeData(int p, int d)
    {
        Node *ptr = check(p);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node data changed succesfully" << endl;
        }
        else
        {
            cout << "Key not present" << endl;
        }
    }
    //Print
    void Print()
    {
        if (head == NULL)
        {
            cout << "LInked list is Empty" << endl;
        }
        else
        {
            cout << "Elements of the linked list are" << endl;
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                cout << "(" << ptr->key << "," << ptr->data << ")"
                     << "-------->";
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int choice;
    int key, data, position;
    do
    {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "0. Exit" << endl;

        cin >> choice;
        Node *n1 = new Node();

        switch (choice)
        {
        case 1:
            cout << "Enter the key followed by data" << endl;
            cin >> key;
            cin >> data;
            n1->key = key;
            n1->data = data;
            s.Append(n1);
            break;
        case 2:
            cout << "Enter the key followed by data" << endl;
            cin >> key;
            cin >> data;
            n1->key = key;
            n1->data = data;
            s.Prepend(n1);
            break;
        case 3:
            cout << "Enter the key followed by data" << endl;
            cin >> key;
            cin >> data;
            n1->key = key;
            n1->data = data;
            cout << "Enter the position" << endl;
            cin >> position;
            s.Insertion(position, n1);
            break;
        case 4:
            cout << "Entr the position" << endl;
            cin >> position;
            s.Deletion(position);
            break;
        case 5:
            cout << "Enter the position followed by data" << endl;
            cin >> position;
            cin >> data;
            s.ChangeData(position, data);
            break;
        case 6:
            s.Print();
        default:
            cout << "Enter a proper option" << endl;
        }
    } while (choice != 0);
}
