class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int s = arrays[0][0];
        int b = arrays[0].back();
        int dist = 0;
        for(int i =1;i<arrays.size();i++){
            dist = max(dist,abs(arrays[i].back()- s));
            dist = max(dist,abs(b-arrays[i][0]));
            s = min(s, arrays[i][0]);
            b = max(b, arrays[i].back());
        }
        return dist;
    }
};