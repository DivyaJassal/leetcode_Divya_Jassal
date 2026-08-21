class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i;
        int min_price = prices[0];
        int max_profit = 0;
        
        for(i=0;i<n;i++){
            min_price = min(min_price,prices[i]);
            int current_price = prices[i];
            int profit = current_price - min_price;

            max_profit = max(max_profit, profit);
        }
        return max_profit;
        
    }
};