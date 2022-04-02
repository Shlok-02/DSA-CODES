#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

     ~Node(){ //to free the memory from the deleted node
         
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
            this->prev = NULL;
            cout << " memory is free for node with data " << value << endl;
        }
    }
};


void PrintLinkedList(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void CountNode(Node* &head){
    Node* temp=head;
    int cntr=0;
    while(temp!=NULL){
        cntr++;
        temp=temp->next;
    }

    cout<<"The length of linked list is:- "<<cntr<<endl;
}

void InsertAtHead(Node* &head,int data){

    Node* temp=new Node(data);

    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtTail(Node* &head,int data){
    Node* temp=head;
    //cout<<"Inside tail"<<endl;
    
    /* if(head->next==NULL){
        Node* newNode=new Node(data);
        temp->next=newNode;
        newNode->prev=temp;
        return;
    } */

    while(temp->next!=NULL){
        temp=temp->next;
    }
    //cout<<temp->data<<endl;

    Node* newNode=new Node(data);

    temp->next=newNode;
    newNode->prev=temp;
}


void InsertAtPos(Node* &head,int data,int pos){
    
    Node* newNode=new Node(data);

    if(pos==1){//insert at head
        InsertAtHead(head,data);
        return;
    }

    int counter=1;

    Node* temp=head;

    while(counter<pos-1){
        temp=temp->next;
        counter++;
    }

    if(temp->next==NULL){ //insert at tail
        InsertAtTail(head,data);
        return;
    }

    //new node is link to its next node
    newNode->next=temp->next;
    temp->next->prev=newNode;
    
    //new node is link to its prev node
    temp->next=newNode;
    newNode->prev=temp;

}



void DeleteHead(Node* &head){
    Node* temp=head;

    head=temp->next; //head is pointed to next node

    //linking of prev heads are deleted
    temp->next->prev=NULL; 
    temp->next=NULL;
    delete temp; //prev head is delete
}

void DeleteTail(Node* &head){
    Node* currNode=head;
    Node* prevNode=NULL;

    while(currNode->next!=NULL){
        prevNode=currNode;
        currNode=currNode->next;
    }

    prevNode->next=currNode->next;
    currNode->prev=NULL;
    currNode->next=NULL;
    delete currNode;


}

void DeletePos(Node* &head,int pos){
    if(pos==1){
        DeleteHead(head);
        return ;
    }else{
        //deleting any pos node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}
    



//remember first join then break the links

int main(){
    Node* node1=new Node(10);
    Node* head=node1;

    PrintLinkedList(head);

    //inseting elements from head
    /* InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAtHead(head,14);
    InsertAtHead(head,15);
    PrintLinkedList(head); */


    //inseting elements from tail
    /*   InsertAtTail(head,12);
    InsertAtTail(head,13);
    InsertAtTail(head,14);
     */

    //Inserting element at any pos
    InsertAtPos(head,23,1);
    InsertAtPos(head,213,2);
    InsertAtPos(head,99,3);
    InsertAtPos(head,23,5);


    PrintLinkedList(head);
    CountNode(head);

    //deleting head 
   /*  
   DeleteHead(head);
    PrintLinkedList(head);
    CountNode(head);

    DeleteHead(head);
    PrintLinkedList(head);
    CountNode(head); */


    //deleting Tail
    /* DeleteTail(head);
    PrintLinkedList(head);
    CountNode(head);

    DeleteTail(head);
    PrintLinkedList(head);
    CountNode(head); */

    DeletePos(head,3);
    PrintLinkedList(head);
    CountNode(head);


}