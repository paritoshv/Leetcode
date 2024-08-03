class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> store1;
        unordered_map<int,int> store2;
        int n = target.size();
        for(int i =0;i<n;i++){
            if(store1.find(target[i])==store1.end()){
                store1[target[i]]=1;
            } else{
                store1[target[i]]++;
            }
            if(store2.find(arr[i])==store2.end()){
                store2[arr[i]]=1;
            } else{
                store2[arr[i]]++;
            }
        }

        for(auto i : store1){
            if(store2[i.first]!= i.second){
                return false;
            } 
        }
        return true;
    }
};