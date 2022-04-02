/* 
Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100


Output: 40 20 10 30 100 
*/









class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL)
            return ans;
        
        map<int,int>mp; //map to store hosrizontal disatnce and data of node
        queue<pair<Node*,int>> q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
           pair<Node*,int>frontNode=q.front();
           q.pop();
           
           Node* temp=frontNode.first;
           int hd=frontNode.second;
           
           if(mp.find(hd)==mp.end()){
               mp[hd]=temp->data;
           }
           
           if(temp->left){
               q.push(make_pair(temp->left,hd-1));
           }
           if(temp->right){
               q.push(make_pair(temp->right,hd+1));
           }
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }

};