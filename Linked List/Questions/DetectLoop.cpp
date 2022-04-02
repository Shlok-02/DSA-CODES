#include<map>

bool detectLoop(Node* head){
    map<Node*,bool>v;

    Node* temp=head;
    while(temp!=NULL){
        if(v[temp]==true){
            return true; //loop is present in the ll
        }

        v[temp]=true; //mark the node as true i.e it is visited
        temp=temp->next;
    }

    return false; //after traversing if the condition not matches then return false

}

int main(){
    if(detectLoop(head))
        cout<<"Loop is there"<<endl;
    else
        cout<<"No loop"<<endl;
}