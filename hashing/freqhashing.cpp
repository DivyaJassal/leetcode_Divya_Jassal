class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        int i;
        int n = nums.size();

        int hash[101] ={0};
        for(i=0; i<n; i++){
            hash[nums[i]] +=1;
        }

        for(i=0; i<=100; i++){
            int freq = hash[i];
            if(freq>1){
            int count=0;
            for(int j =1; j<= freq; j++){
            if(freq%j == 0){
                count++;
            }
            
        }
        if(count==2){
                return true;
            }
        }
        
        }
        return false;
    }
};