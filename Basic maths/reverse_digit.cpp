#include <climits>
class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int ls;
        while(x!=0){
            ls=x%10;
            x=x/10;
            rev = (rev*10)+ ls;
        }
        if(rev> INT_MAX || rev < INT_MIN){
            return 0;
        }
        return (int)rev;
    }
};