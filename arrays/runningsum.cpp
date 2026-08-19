class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        int n= nums.size();
        vector<int> ans(nums);
        for(i=1; i<n; i++){
            ans[0]= nums[0];
            ans[i]= nums[i]+ans[i-1];
        }
        return ans;

        
    }
};