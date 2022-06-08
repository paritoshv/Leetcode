class Solution {
public:
    int maxProfit(vector<int>& prices) {;
        int n= prices.size();
        int profit;
        int Maxprofit=0;
        int lsf =INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<lsf){
                lsf=prices[i];
            }
            profit=prices[i]-lsf;
            if(profit>Maxprofit){
                Maxprofit=profit;
            }
        }
      return Maxprofit;
    }
};