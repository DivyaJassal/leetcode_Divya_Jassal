//ans should be in the form of nums[nums[i]]

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i <n ; i++){
            ans[i]= nums[nums[i]];
        }
        return ans;
        
    }
};