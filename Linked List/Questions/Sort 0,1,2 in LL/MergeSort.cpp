/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/

node* getMid(node* head){
    //get the mid of linked list
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
} 


node* sort(node* left,node* right){
    
    if(left==NULL) //if left LL is empty then return right LL
        return right;
    if(right==NULL)//if right LL is empty then return left LL
        return left;
    
    node* ans=new node(-1); //new node to store the sorted LL
    node* temp=ans;
    while(left!=NULL and right!=NULL){
        if(left->data<right->data){ //if the left node data < right node data then add the left node to ans LL
            temp->next=left;
            temp=left;
            left=left->next;
        }else{  //if the right node data < left node data then add the right node to ans LL
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    
    while(left!=NULL){ //if the right is finished traversing then add the Left LL
         temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){ //if the left is finished traversing then add the right LL
                    temp->next=right;
            temp=right;
            right=right->next;
    }
    ans=ans->next;
    return ans;

}
node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL or head->next==NULL)
        return head;
   
    node* mid=getMid(head);
    node* right=mid->next;
    node* left=head;
    mid->next=NULL;
    
    left=mergeSort(left);
    right=mergeSort(right);
    
    node* result=sort(left,right);
    return result;
}
