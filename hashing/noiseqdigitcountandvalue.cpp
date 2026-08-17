//0indexed string array 
class Solution {
public:
    bool digitCount(string num) {
        int i;
        int n = num.size();
        int hash[10] = {0};
        for(i=0; i<n; i++){
            hash[num[i] -'0']++;
        }

        for(i=0; i<n;i++){
            if(hash[i]!= num[i] - '0'){
            return false;
        }
        }
        return true;

    }   
};

// if string is '1210' means num[2] 1 occur 2 times num[1] 1 occur two times 