
void solve(stack<int>&inputStack,int count,int size){
    if(size/2==count){
        inputStack.pop();
        return;
    }
    
    //ount++;
    int temp=inputStack.top();
    inputStack.pop();
    
    solve(inputStack,count+1,size);
    inputStack.push(temp);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
    solve(inputStack,count,N);
}