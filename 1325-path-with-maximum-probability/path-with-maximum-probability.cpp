class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& sP, int s, int e){ 
        vector<double> v(n, 0.0);
        v[s] = 1.0; 
        for (int i = 0; i < n - 1; ++i){
            bool updated = false;
            for (int j = 0; j < edges.size(); ++j){
                int x = edges[j][0];
                int y = edges[j][1];
                double prob = sP[j]; 
                if (v[x] * prob > v[y]){
                    v[y] = v[x] * prob;
                    updated = true;
                } 
                if (v[y] * prob > v[x]){
                    v[x] = v[y] * prob;
                    updated = true;
                }
            } 
            if (!updated) break;
        } 
        return v[e];
    }
};