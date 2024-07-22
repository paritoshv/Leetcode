class Solution {
public:
    static bool cmp(pair <string, int> p1, pair <string, int> p2){
        return p2.second<p1.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> v;
        for(int i =0;i<names.size();i++){
            v.push_back(make_pair(names[i],heights[i]));
        }

        sort(v.begin(),v.end(), cmp);
        vector<string> ans;
        for(int i =0;i<names.size();i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }

};