class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        vector<int> ans;
        for(int i =0; i<arr1.size();i++){
            if(mp.find(arr1[i]) == mp.end()){
                mp[arr1[i]]=1;
            } else {
                mp[arr1[i]]++;
            }
        }
        int j=0;
        for(int i =0; i<arr2.size();i++){
            if(mp.find(arr2[i]) != mp.end()){
                while(mp[arr2[i]]>0){
                    mp[arr2[i]]--;
                    arr1[j]=arr2[i];
                    j++;
                }
            } 
        }

        int k = j;

        for(auto m : mp){
            while(m.second>0){
                m.second--;
                arr1[j]=m.first;
                j++;
            }
        }
        return arr1;
    }
};