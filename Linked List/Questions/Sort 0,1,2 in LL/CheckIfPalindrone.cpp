
 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    private:
    Node* getMiddle(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* temp=head;
        
        //Step1-> get Middle of LL
        Node* middle=getMiddle(head);
        
        //Step2-> reverse the LL after Middle
        middle->next=reverse(middle->next);
        
        //step3->compare the 2LL 
        Node* h1=head;
        Node* h2=middle->next;
        
        while(h2!=NULL){
            if(h1->data!=h2->data){
                return false;
            }
            h1=h1->next;
            h2=h2->next;
        }
        
        
        Node* t=middle->next;
        middle->next=reverse(t);
        return true;
    }
};


//Other approaches are to use string 
/* 1. create a string from the node data of LL
2. then check if the string is plaindrone or not using the logic of s=0 and e=n-1 and compare each char at s and e */

