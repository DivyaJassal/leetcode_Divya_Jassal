class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high = n-1;

        while(low<high){
            int currentsum= nums[low]+ nums[high];

            if(currentsum==target){
                return{low+1, high+1};
            }
            else if(currentsum<target){
                low++;
            }
            else{
                high--;
            }
        }

        return {};
        
    }
};
//this particular problem uses 1-based index