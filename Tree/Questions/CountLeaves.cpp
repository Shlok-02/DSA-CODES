/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
//Method 1:- 
void count(BinaryTreeNode<int>* root,int& ans){
    if(root==NULL)
        return;
   	if(root->left==NULL and root->right==NULL)
        ans++;
   	count(root->left,ans);
    count(root->right,ans);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int sum=0;
    count(root,sum);
    return sum;
}

//Method 2:-

void inorder(BinaryTreeNode<int> * root, int &count) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left, count);
   	
    //leaf node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    
    inorder(root->right, count);

}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
