class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWTime =0;
        double currTime =0;
        for(int i =0;i<customers.size();i++){
            if(currTime<customers[i][0]){
                totalWTime += customers[i][1];
                currTime = customers[i][0] + customers[i][1];
            } else {
                totalWTime += (currTime -  customers[i][0]) + customers[i][1];
                currTime += customers[i][1];
            }
        }

        return totalWTime/customers.size();
    }
};