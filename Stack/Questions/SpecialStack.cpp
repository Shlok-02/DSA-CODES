/* Design a stack with getmin() in O(1) time and space */


#include<stack>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
class SpecialStack {
    // Define the data members.

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        stack<int>s;
    	int mini=INT_MAX;
    void push(int data) {
         //check for first element
        if(s.empty()){
            s.push(data);
            mini=data;
        }else{
            if(data<mini){
                int val=2*data-mini;
                s.push(val);
                mini=data;
            }else{
                s.push(data);
            }
        }
        
    }

    int pop() {
        // Implement the pop() function.
        if(s.empty()){
            return -1;
        }else{
            int curr=s.top();
            s.pop();
            if(curr>mini){
               return curr;
            }else{
                int prevMin = mini;
                int val = 2*mini - curr;
                mini = val;
                return prevMin;
            }
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        } 
        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty() {
      return s.empty();
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty())
            return -1;
        return mini;
    }  
};