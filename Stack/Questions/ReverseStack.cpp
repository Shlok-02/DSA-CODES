//Using Recursion


void insertAtBottom(stack<int>& s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int temp=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(temp);
}



void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){ //base case
        return;
    }
    
    int temp=stack.top();//store the top value of stack into a var
    stack.pop();
    
    //recursive call to reverse the stack
    reverseStack(stack);
    
    //insert the temp at bottom in stack
    insertAtBottom(stack,temp);
}