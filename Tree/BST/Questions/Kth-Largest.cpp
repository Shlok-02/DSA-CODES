class Solution
{
    public:
    vector<int>v;
    void Inorder(Node* root){
        if(root==NULL)
            return;
        
        Inorder(root->left);
        v.push_back(root->data);
        Inorder(root->right);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        Inorder(root);
        reverse(v.begin(),v.end());
        return v[K-1];
    }
};