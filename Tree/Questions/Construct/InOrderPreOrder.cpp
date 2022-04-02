class Solution{
    public:
    int FindPos(int in[],int ele,int n){
        for(int i=0;i<n;i++){
            if(in[i]==ele)
                return i;
        }
        return -1;
    }
    Node* solve(int in[],int pre[],int &index,int start,int end,int size){
        
        if(index>=size || start>end){
            return NULL;
        }
        
        
        int data=pre[index++];
        Node* root=new Node(data);
        
        //the pos of root is searched in inorder so that left and right part be divided
        int pos=FindPos(in,data,size);
        
        //recursive calls to construct left and right part of root node
        root->left=solve(in,pre,index,start,pos-1,size);
        root->right=solve(in,pre,index,pos+1,end,size);
        
        
        return root;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code 
        int inorderStart=0;
        int inorderEnd=n-1;
        int index=0; //for the root ele
        Node* root=solve(in,pre,index,inorderStart,inorderEnd,n);
        return root;
    }
};