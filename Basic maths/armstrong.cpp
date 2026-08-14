#include <climits>
class Solution {
public:
    bool isArmstrong(int n) {
        long long sum=0;
        int dup= n;
        int ls;
        if(n<0){
            return false;
        }
        while(n>0){
            ls=n%10;
            n=n/10;
            sum= sum + (ls*ls*ls);

        }
        if(sum> INT_MAX || sum < INT_MIN){
            return 0;
        }
        
        return sum==dup;

    }
};