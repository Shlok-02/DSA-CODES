class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if(root==NULL)
            return 0;
        int h1=height(root->left);
        int h2=height(root->right);
        
        return max(h1,h2)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
       if(root==NULL){
           return true;
       }
       
       bool left=isBalanced(root->left);
       bool right=isBalanced(root->right);
       
       bool diff=abs(height(root->right) - height(root->left)) <=1;
       
       if(left and right and diff)
            return true;
        else
            return false;
    }
};