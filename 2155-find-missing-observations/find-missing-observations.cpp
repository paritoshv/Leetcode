class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sumM = 0;
        for(int i =0;i<m;i++){
            sumM+=rolls[i];
        }

        int sumN = mean*(m+n) - sumM;
        vector<int> ans1;
        if(sumN>6*n || sumN<n){
            return ans1;
        }
        
        int distributeMean = sumN/n;
        int mod = sumN%n;
        vector<int> ans2(n,distributeMean);
        int currSum =0;
        for(int i = 0; i<mod;i++){
            ans2[i]++;
        }
        return ans2;
    }
};