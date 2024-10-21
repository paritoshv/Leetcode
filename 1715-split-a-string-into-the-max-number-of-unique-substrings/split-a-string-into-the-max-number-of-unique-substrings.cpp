class Solution {
public:
    int backtrack(string s, int start, unordered_set <string>& st){
        if(start == s.size()){
            return 0;
        }

        int maxCount =0;
        for(int end =start +1;end<=s.size();++end){
            string k = s.substr(start,end-start);
            if(st.find(k)==st.end()){
                st.insert(k);
                maxCount = max(maxCount, 1 + backtrack(s,end,st));
                st.erase(k);
            }   
        }
        return maxCount;
    }
    int maxUniqueSplit(string s) {
        unordered_set <string> st;
        return backtrack(s,0,st);
    }
};