class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        //worker[j] > difficulty[i] such that Profit[i] is max
        int totalProfit=0;
        for(int j =0;j<worker.size();j++){
            int maxProfit =0;
            for(int i =0;i<profit.size();i++){
                if(difficulty[i]<=worker[j]){
                    maxProfit = max(maxProfit, profit[i]);
                }
            }
            totalProfit+=maxProfit;
        }
        return totalProfit;
    }
};