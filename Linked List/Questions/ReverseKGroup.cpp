Node* kReverse(Node* head, int k) {
    // Write your code here.
    //base case for recursion
    if(head==NULL){
        return NULL;
    }
    
    Node* prev=NULL;
    Node* forward=NULL;
    Node* curr=head;
    int count=0;
    
    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
        count++;
    }
    
    if(forward!= NULL){
        head->next=kReverse(forward,k);
    }
    
    return prev;
}