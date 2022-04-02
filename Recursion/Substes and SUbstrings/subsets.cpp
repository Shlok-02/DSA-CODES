#include <bits/stdc++.h>
using namespace std;



void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            //before returning null push the output vector into ans
            ans.push_back(output);
            return ;
        }
        
        //exclude the elements just inc the index
        solve(nums, output, index+1, ans);
        
        //include the element means get that index ele from nms and store into output
        int element = nums[index];
        output.push_back(element);

       /*  for(auto i:output) {
            cout<<i<<" ";
        }
        cout<<endl; */

        solve(nums, output, index+1, ans);
        
}

vector<vector<int>> subsets1(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);

        /* for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
        } */

        return ans;
        
}

int main(){
    vector<int>nums={1,2,3};

   subsets1(nums);

    

}