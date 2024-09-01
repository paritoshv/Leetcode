class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int column = 0;
        int row =0;
        vector<vector<int>>  ans(m, vector<int>(n));
        vector<vector<int>>  ans2(0, vector<int>(0));
        if(m*n != original.size()){
            return ans2;
        }
        for(int i=0;i<original.size();i++){
            if(column==n){
                column=0;
                row++;
            }
            if(column>=n || row>=m){
                return ans2;
            }
            ans[row][column] = original[i];
            column++;
        }
        return ans;
    }
};