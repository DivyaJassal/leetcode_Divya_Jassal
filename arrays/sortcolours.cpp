//sort colours only 0, 1,2 are given in question 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();  
        int high= n-1;
        int low=0;
        int mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};