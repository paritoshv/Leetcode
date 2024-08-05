class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        int t =0;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=1;
            } else {
                mp[arr[i]]++;
            }
        }

        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                t++;
            }
            if(t==k){
                return arr[i];
            }
            if(t>k){
                return "";
            }
        }
        return ""; 
    }
};