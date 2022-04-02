void sortedInsert(stack<int>&s,int x){
    //here the condition is if stack is empty then the ele to be inserted is the smallest or if the top element of stack is less than the ele to be inserted i.e the le to be inserted is the largestof all the elements present
    
    if(s.empty() or(!s.empty() and s.top()<x)){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    
    sortedInsert(s,x);
    s.push(temp);
}

void sortStack(stack<int> &s)
{
	// Write your code here
    //if stack is empty then return the emty stack
    if(s.empty()){
        return;
    }
    
    //save the top element in stack
    int num=s.top();
    s.pop();
    
    //recursive call
    sortStack(s);
    
    //recursive call to insert element in stack(sorted way)
    sortedInsert(s,num);
}
