class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            profit = max((prices[i] - minPrice), profit);
            // if(prices[i] < minimum) minimum = prices[i];
            // if ((prices[i] - minimum) > profit) profit = prices[i] - minimum;
        }
        return profit;
    }
};
