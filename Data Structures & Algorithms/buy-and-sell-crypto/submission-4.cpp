class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof = 0;
        int l = 0, r = l + 1;
        while (r < prices.size()){
            int sell = prices[r] - prices[l];

            if (sell > 0){
                max_prof = max (max_prof, sell);
            }
            else l = r;
            r++;
        }
        return max_prof;

    }
};
