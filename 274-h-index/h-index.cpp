class Solution {
public:
    int hIndex(vector<int>& citations) {
        //0 1 2 3 4 5
        // 0 1 3 5 6
        sort(citations.begin(),citations.end());

        int n = citations.size(); //5
        int ans =0;
        for(int i =0; i<n; i++){
            ans = max(ans, n-i <= citations[i] ? n-i : 0 );
        }
        return ans;
    }
};