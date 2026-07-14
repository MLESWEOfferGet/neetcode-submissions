class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy = prices[0];
        for (int current_price: prices){
            int current_profit = current_price - buy;
            if (current_profit > 0){
                max_profit = max(max_profit, current_profit);
            }
            
            buy = min(buy, current_price);
        }
        return max_profit;
    }
};
