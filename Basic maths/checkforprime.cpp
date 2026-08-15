class Solution {
public:
    bool isPrime(int n) {
        int i;
        int count=0;

        for(i=1; i<=n ;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else{
            return false;
        }
        

        //your code goes here
    }
};