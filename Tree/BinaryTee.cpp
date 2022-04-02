#include<bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
    }
};


node* CreateTree(node* root){
    cout<<"Enter the data "<<endl;
    int d;
    cin>>d;
    root=new node(d);

    if(d==-1){
        return NULL;
    }

    cout<<"Enter the data from left node of :- "<<d<<endl;
    root->left=CreateTree(root->left);
    cout<<"Enter the data for right node of :-"<<d<<endl;
    root->right=CreateTree(root->right);

    return root;
    
}

void LevelTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL); //as a sperator 

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            // one level is traversed so go to new line
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                //temp->left is not null push in queue
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void PreOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node* root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

int main(){
    node* root=NULL;
    
    root=CreateTree(root);
    //data is:- 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    buildFromLevelOrder(root);


    /* LevelTraversal(root);

    //
    cout<<"Inorder traversal is:- " <<endl;
    inorder(root);
    cout<<endl;
    //
    cout<<"Preorder traversal is:- "<<endl;
    PreOrder(root);
    cout<<endl;
    //
    cout<<"Postorder traversal is:- "<<endl;
    PostOrder(root);
    cout<<endl; */
}