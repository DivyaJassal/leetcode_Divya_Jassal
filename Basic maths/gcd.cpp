class Solution {
public:
    int GCD(int n1,int n2) {
        int i;
        int com=1;

        for(i=1; i<=min(n1, n2) ;i++){
            if(n1%i==0 && n2%i==0){
                com = i;
            }
        }
            return com;
    }
};