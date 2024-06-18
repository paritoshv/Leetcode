class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // if(s=="")return 0;
        int i = 0;
        int j = 0;
        int maxlength=0;
        while(j<s.length() && i<s.length()){
            // store[s[i]]=1;
            map<char, int> store;
            while(j<s.length() && store.find(s[j])==store.end()){
                store[s[j]] = 1;
                j++;
            }
            int siz = store.size();
            maxlength = max(maxlength, siz);
            i++;
            j=i;
        }
        return maxlength;
    }
};