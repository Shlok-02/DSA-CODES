bool FloydLoopDetect(Node* head){
    Node* slow=head;
    Node* fast=head;

    if(head==NULL || head->next==NULL){
        return false;
    }

    while(fast!=NULL && slow !=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(fast==slow){
            return true; //loop is present
        }
    }

    return false;
}