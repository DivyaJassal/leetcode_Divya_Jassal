class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n= nums.size();
        for(int i=n-1; i>=1; i--){
            for (int j=0; j<=i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j+1], nums[j]);
                }
            }
        } 
        return nums;       
    }
};

// high tc 