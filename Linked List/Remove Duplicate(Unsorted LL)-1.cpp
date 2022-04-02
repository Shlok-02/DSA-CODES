/****************************************************************
    Following is the class structure of the Node class:
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
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // Write your code here
    Node* curr=head;
    
    
    while(curr!=NULL){
        Node* forward=curr->next;
        Node* prev=curr;
        
        while(forward!=NULL){
            if(forward->data==curr->data){
                prev->next=forward->next;
                delete(forward);
                forward=prev->next;
            }
            else{
                forward=forward->next;
                prev=prev->next;
            }
        }
        curr=curr->next;
    }
    return head;
}