int FindPos(int in[],int ele,int n){
    for(int i=0;i<n;i++){
        if(in[i]==ele)
            return i;
    }
    return -1;
}

Node* solve(int in[],int post[],int& index,int start,int end,int size){
    
    if(index<0 or(start>end)){
        return NULL;
    }
    
    int data=post[index--]; //dec index as we are starting from back
    //root node is created
    Node* root=new Node(data);
    int pos=FindPos(in,data,size);
    
    //here we first call right subtree then left part as in postorder(LRN) before node comes right and we are travsersing it from back
    
    root->right=solve(in,post,index,pos+1,end,size);
    root->left=solve(in,post,index,start,pos-1,size);
    
    return root;
    
}



Node *buildTree(int in[], int post[], int n) {
    // Your code here
    
    int postOrderIndex=n-1;
    int inOrderStart=0;
    int inOrderEnd=n-1;
    
    Node* root=solve(in,post,postOrderIndex,inOrderStart,inOrderEnd,n);
    return root;
}