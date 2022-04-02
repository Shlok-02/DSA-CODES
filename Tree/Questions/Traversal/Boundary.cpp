/*         1 
      /   \
     2     3  
    / \   / \ 
   4   5 6   7
      / \
     8   9
   
Output: 1 2 4 8 9 6 7 3
 */






class Solution {
public:
    void traverseLeft(Node* root,vector<int>& ans){
        //if the node is null or leaf then go back as we add only left nodes
        if(root==NULL or(root->left==NULL and root->right==NULL))
            return;
        
        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left,ans);
        else
            traverseLeft(root->right,ans);
    }
        
    void travserseLeaf(Node* root,vector<int>& ans){
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL){ //current node is leaf so push in vector
            ans.push_back(root->data);
            return;
        }
        
        //going in inorder manner
        travserseLeaf(root->left,ans);
        travserseLeaf(root->right,ans);
    }
    
    void travserseRight(Node* root,vector<int>&ans){
        if(root==NULL or (root->left==NULL and root->right==NULL)){
            return;
        }
        
        //here the order of nodes are in reverse manner so we push them in vector while returning time
        if(root->right)
            travserseRight(root->right,ans);
        else
            travserseRight(root->left,ans);
        ans.push_back(root->data);
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL)
            return ans;
        ans.push_back(root->data);
        
        //push the left part of tree in the vector exclusive of root and leaf nodes
        traverseLeft(root->left,ans);
        
        //push all the leaf nodes in ans
        travserseLeaf(root->left,ans);
        travserseLeaf(root->right,ans);
        
        //push all the right part exclusive of root and leaf nodes
        travserseRight(root->right,ans);
        
        //return vector
        return ans;
    }
};