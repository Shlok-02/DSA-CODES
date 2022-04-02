/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head==NULL)
        return head;
    Node* t=head;
    Node* p=head->next;
    
    while(p!=NULL){
        if(t->data==p->data){
            t->next=p->next;
            delete(p);
            p=t->next;
        }
        else{
            t=t->next;
            p=p->next;
        }
    }
    return head;
}