//solution 1 - 644ms
class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int left= low;
        int right= mid+1;
        int n= nums.size();

        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low; i<= high; i++){
            nums[i]= temp[i-low];
        }
    }
    void mergesort(vector<int>& nums,int low,int high){
        int n= nums.size();
        if(low>=high){
            return;
        }
        int mid= (high+low)/2;
        mergesort(nums, low, mid);
        mergesort(nums, mid+1, high);

        merge(nums,low, mid, high);
    
    }

    vector<int> sortArray(vector<int>& nums) {
        int n= nums.size();
        mergesort(nums,0, n-1);
        return nums;
             
    }
    
};

//low tc 
// make the tmep array outside the recurssive loop 


//solution 2- better 
// 45 ms much better 

class Solution {
public:
        void merge(vector<int>& nums, vector<int>& temp, int low, int mid, int high){
            int n= nums.size();
            int left= low;
            int right= mid+1;
            int k=low;

            while(left<=mid && right<=high){
                if(nums[left]<=nums[right]){
                    temp[k]= nums[left];
                    left++;
                    k++;
                }
                else{
                    temp[k]= nums[right];
                    right++;
                    k++;
                }
            }
            while(left<=mid){
                temp[k++]= nums[left++];
            }
            while(right<=high){
                temp[k++]= nums[right++];
            }
            for(int i=low; i<=high; i++){
                nums[i]= temp[i];
            }
        }
        void mergesort(vector<int>& nums, vector<int>& temp, int low, int high){
            int n= nums.size();
            if(low>=high){
                return;
            }
            int mid= (high+low)/2;
            mergesort(nums, temp, low, mid);
            mergesort(nums,temp, mid+1, high);

            merge(nums, temp, low, mid, high);


        }
        vector<int> sortArray(vector<int>& nums) {

            int n = nums.size();
            vector<int> temp(n);

            mergesort(nums,temp, 0, n-1);
            return nums;   
    }
    
};