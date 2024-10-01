class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i =0;i<arr.size();i++){
            mp[(arr[i] % k + k) % k]++;
        }
        for(int i =0;i<arr.size();i++){
            
                int mod = (arr[i] % k + k) % k;

                if(mod==0){
                    if(mp[mod]%2==1){
                        return false;
                    }
                }
                else if(mp[mod] != mp[k-mod]){
                    return false;
                }
        }
        return true;
    }
};