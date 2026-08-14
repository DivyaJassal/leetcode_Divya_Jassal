#include <climits>
class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int dup= x;
        int ls;
        if(x<0){
            return false;
        }
        while(x>0){
            ls=x%10;
            x=x/10;
            rev = (rev*10)+ ls;
        }
        if(rev> INT_MAX || rev < INT_MIN){
            return 0;
        }
        
        return rev==dup;
    }
};