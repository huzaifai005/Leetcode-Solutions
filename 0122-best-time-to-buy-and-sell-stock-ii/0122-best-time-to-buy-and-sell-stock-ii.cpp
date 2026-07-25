class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        int profit = 0;
        int cost = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > cost) {
                profit = prices[i] - cost;
                totalProfit += profit;
            }
            cost = prices[i];
            
        }
    return totalProfit;
    }
};