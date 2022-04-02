/* Input:
           7
        /     \
       9       7
     /  \     /   
    8    8   6     
   /  \
  10   9 
Output:
7 7 9 8 8 6 9 10 
 */







class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>result;
    	if(root==NULL)
    	    result;
    	
    	queue<Node*>q;
    	q.push(root);
    	bool leftToRight=true;  //to track left to right or right to left travsersal
    	
    	while(!q.empty()){
    	    
    	    int size=q.size();
    	    
    	    vector<int>ans(size);  //to store node data for individual traversal
    	    
    	    for(int i=0;i<size;i++){
    	        Node* temp=q.front();
    	        q.pop();
    	        
    	        int index=leftToRight? i:size-i-1;  //how to store each data either reverse or normal way
    	        ans[index]=temp->data;
    	        
    	       if(temp->left)
    	            q.push(temp->left);
    	        if(temp->right)
    	            q.push(temp->right);
    	    }
    	    
    	    leftToRight=!leftToRight; //alternate the flow 
    	    for(auto i:ans){
    	        result.push_back(i);
    	    }
    	           
    	}
    	return result;
    }
};