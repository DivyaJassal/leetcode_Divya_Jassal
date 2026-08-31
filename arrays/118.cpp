//pascal traingel
class Solution {
public:
    vector<int> genrow(int n){
    long long ans=1;
    vector<int> ansrow;
    ansrow.push_back(1);
    //first elemenet will always be 1
    for(int col=1; col<=n; col++){
        ans= ans* (n - col+1);
        ans= ans/(col);
        ansrow.push_back(ans);
    }
    return ansrow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            ans.push_back(genrow(i));
        }
        return ans;
    }
};