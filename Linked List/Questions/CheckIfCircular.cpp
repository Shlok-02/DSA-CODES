//without loop in it

bool isCircular(Node* head){
    // Write your code here.
    if(head==NULL ){
        return NULL;
    }

    if(head->next==head){
        return true;
    }
    
    if(head->next==NULL){
        return false;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next==head)
            return true;
       	temp=temp->next;
    }
    return false;
}
