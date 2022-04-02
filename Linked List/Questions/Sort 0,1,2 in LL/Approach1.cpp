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
Node* sortList(Node *head)
{
    // Write your code here.
	int zero=0,one=0,two=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
             temp=temp->next;
        }else if(temp->data==1){
            one++;
             temp=temp->next;
        }else if(temp->data==2){
            two++;
             temp=temp->next;
        }
    }
   temp=head;
    while(temp!=NULL){
        if(zero!=0){
            temp->data=0;
            zero--;
        }else if(one!=0){
            temp->data=1;
            one--;
        }else if(two!=0){
            temp->data=2;
            two--;
        }
        temp=temp->next;
    }
    
    return head;
	
    
}


