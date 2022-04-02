/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void InsertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
	//create 3 New Node head and tail for 0,1,2
    
    //New LL head and tail for zero
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
   
   //New LL head and tail for one
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
  	
       //New LL head and tail for two
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
    
    Node* curr=head;
    
    
    //adding data in the 3 new LL
    while(curr!=NULL){
        if(curr->data==0){
            InsertAtTail(zeroTail,curr);
        }else if(curr->data==1){
            InsertAtTail(oneTail,curr);
        }else if(curr->data==2){
            InsertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }
    
    //Merge 3 new LL
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }else{
        zeroTail->next=twoHead->next;
    }
    
    oneTail->next=twoHead->next;
    twoTail->next=NULL;
    
    //delete extra head
    head=zeroHead->next;
    
    delete(zeroHead);
     delete(oneHead);
     delete(twoHead);
    
    return head;
    
}
