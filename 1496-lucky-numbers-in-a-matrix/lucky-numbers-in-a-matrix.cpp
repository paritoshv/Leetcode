class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int> mins;
        vector<int> ans;
        for(int i =0;i<matrix.size();i++){
            int m = matrix[i][0];
            for(int j =0;j<matrix[0].size();j++){
                m = min(m, matrix[i][j]);
            }
            mins.insert(m);
        }
        for(int i =0;i<matrix[0].size();i++){
            int m = matrix[0][i];
            for(int j =0;j<matrix.size();j++){
                m = max(m, matrix[j][i]);
            }
            if(mins.find(m)!= mins.end()){
                ans.push_back(m);
            };
        }

        return ans;
    }
};