Node* insert(Node* root, int Key) {
    // Your code here
    if(root==NULL){
        Node* temp=new Node(Key);
        return temp;
    }
    if(Key==root->data)
        return root;
    if(root->data > Key){
        root->left=insert(root->left,Key);
    }else{
        root->right=insert(root->right,Key);
    }
    return root;
