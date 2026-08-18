//[1,2,3,4,5,6,7] ---> [5,6,7,1,2,3,4]

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        reverse(nums.begin(), nums.end());
        k=k%n;

        reverse(nums.begin() , nums.begin()+k );
        reverse(nums.begin()+k , nums.end());
    }
};