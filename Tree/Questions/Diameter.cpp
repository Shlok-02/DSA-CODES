//Method:-1 

  int height(Node* root){
      if(root==NULL)
        return 0;
    int h1=height(root->left);
    int h2=height(root->right);
    
    return max(h1,h2)+1;
}
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
            return 0;
        int left=diameter(root->left);
        int right=diameter(root->right);
        int full=height(root->left)+height(root->right)+1;
    
        return max(left,right,full);
}