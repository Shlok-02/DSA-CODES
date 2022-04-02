#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;
    public:
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};


void LevelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();

        if(front==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

Node* InsertNode(Node* root,int d){

    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(root->data<d){
        root->right=InsertNode(root->right,d);
    }else{
        root->left=InsertNode(root->left,d);
    }
    return root;
}

void Input(Node*& root){
    int data;
    cin>>data;

    while(data!=-1){
        root=InsertNode(root,data);
        cin>>data;
    }
}

void InOrder(Node* root){
    if(root==NULL)
        return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOrder(Node* root){
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root){
    if(root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;

    Input(root);
    LevelOrder(root);

    InOrder(root);
    PreOrder(root);
    PostOrder(root);
}