int sumOfLeafNodes(Node *r ){
     /*Your code here */
     int sum=0;
    if(r==NULL)
        return 0;
    else if(r->right==NULL and r->left==NULL)
        return r->data;
    return sumOfLeafNodes(r->left)+sumOfLeafNodes(r->right);
    
}