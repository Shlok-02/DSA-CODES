#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;  //node type pointer to store addr of next node

    Node(int data){
        this->data=data;  //this->data is field from the above declared one and initialised to the argumented one
        this->next=NULL;
    }


    ~Node(){ //to free the memory from the deleted node
         
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
            cout << " memory is free for node with data " << value << endl;
        }
    }
};

void InsertAtHead(Node* &head,int data){
    
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int data){

    
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int data,int pos){
    

    if(pos==1){ //handles the case to insert data at the begining
        InsertAtHead(head,data);
        return ;
    }


    Node* temp=head;
    int counter=1; //to keep track till we reach at pos-1


    //to insert node a specific pos we have to go till its pos-1 node

    while(counter<pos-1){
        temp=temp->next;
        counter++;
    }

    if(temp->next==NULL){//checks whether if the temp node after traversing is last node or not if it is the execute the following
        InsertAtTail(tail,data);
        return ;
    }

    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
    
}

void DeleteNode(Node* &head,int pos){
    
    if(pos==1){ //delete head node
     cout<<"Deleting head node:- "<<endl;
        Node* temp=head;
        head=head->next; //head will pt to the next node
        temp->next=NULL; //breaking the prev head's connection with LL
        delete temp; //free the memory
    }else{ 
        //to delete any other node
        cout<<"Deleting other node:- "<<endl;

        Node* prev=NULL;
        Node* curr=head;

        int counter=1;
        while(counter<pos){
            //going till pos-1 
            prev=curr;
            curr=curr->next;
            counter++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void PrintLinkedList(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ---> ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* newNode=new Node(12); //a newNode is created in heap memeory
  /*   cout<<newNode->data<<endl;
    cout<<newNode->next<<endl; */
    
    //head and tail pts to same node when there is only one node
    Node*head=newNode;
    PrintLinkedList(head);
    Node* tail=newNode; 
    //below every data is entered from head
    /* InsertAtHead(head,15);
    PrintLinkedList(head);
    InsertAtHead(head,2);
    PrintLinkedList(head);
    InsertAtHead(head,5);
    PrintLinkedList(head); */

    //below every data is entered from tail
    InsertAtTail(tail,122);
    PrintLinkedList(head);
    InsertAtTail(tail,9);
    PrintLinkedList(head);
    InsertAtTail(tail,8);
    PrintLinkedList(head);
    InsertAtTail(tail,7);
    PrintLinkedList(head);

    InsertAtPosition(tail,head,234,2);
    PrintLinkedList(head);

    //deleting a node from a LL
    DeleteNode(head,3);
    PrintLinkedList(head);

}