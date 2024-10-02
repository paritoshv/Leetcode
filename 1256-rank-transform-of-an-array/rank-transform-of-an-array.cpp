class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> t;
       unordered_map<int, int> mp;
       if(arr.size()==0){
        return arr;
       }
       for(int i =0;i<arr.size();i++){
        t.push_back(arr[i]);
       }

       sort(t.begin(),t.end());
       int rank =1;
       mp[t[0]]=rank;
       for(int i =1;i<arr.size();i++){
            if(t[i]>t[i-1])rank++;
            mp[t[i]]=rank;
       }

        for(int i =0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;

    }
};