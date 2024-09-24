class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
      set<int> arr1Prefixes;
      for(int i =0;i<arr1.size();i++){
        int t = arr1[i];
        while(t>0){
            arr1Prefixes.insert(t);
            t = t/10;
        }
      }

      int ans =0;
      for(int i =0;i<arr2.size();i++){
        int t = arr2[i];
        while(!arr1Prefixes.count(t) && t > 0){
            t= t/10;
        }
        if(t>0){
            ans = max(ans,static_cast<int>(log10(t) + 1));
        }
      }

      return ans;
    }
};