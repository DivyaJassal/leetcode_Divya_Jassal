//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets.
//Input: nums = [-1,0,1,2,-1,-4]
//Output: [[-1,-1,2],[-1,0,1]]



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]== nums[i-1]){
                continue;
            }
            int j= i+1;
            int k= n-1;
        
        
            while(j<k){
                int sum= nums[i] +nums[j]+ nums[k];

                if(sum==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]== nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]== nums[k+1]){
                        k--;
                    }
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};

// optimal one by doing n-2 cux only 3 output are req along with taht saying if nums[i]>0 then break the loop 
//cuz when nums[i]>0 ie it is 1 then the sum will be def higher than 0 which fails our case.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2; i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i]== nums[i-1]){
                continue;
            }
            int j= i+1;
            int k= n-1;
        
        
            while(j<k){
                int sum= nums[i] +nums[j]+ nums[k];

                if(sum==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]== nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]== nums[k+1]){
                        k--;
                    }
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};