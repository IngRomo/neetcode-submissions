class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX, profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minimum) minimum = prices[i];
            if ((prices[i] - minimum) > profit) profit = prices[i] - minimum;
        }
        return profit;
    }
};
