class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n;i++){
            nums[i] = nums[i]*nums[i];
        }

        for(int i=0; i<=n-2; i++){
            int min= i;
            for(int j =i; j<=n-1; j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
            swap(nums[min], nums[i]);
        }
        
        return nums;
    }
};

//selection sort 