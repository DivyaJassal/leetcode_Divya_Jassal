class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int n= nums.size();

        for(int i=0; i<n ;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        //when nums[i]= val then it returns j+0 which can be further used in the loop
        
    }
};