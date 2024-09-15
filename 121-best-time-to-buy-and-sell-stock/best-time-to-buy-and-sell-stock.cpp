class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        vector<int> minArr;
        int minNow = prices[0];
        int profit =0;
        for(int i=0;i<prices.size();i++){
            minNow = min(minNow, prices[i]);
            profit = max(profit, prices[i] - minNow);
        }
        return profit;
    }
};