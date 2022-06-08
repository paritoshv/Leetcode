class Solution {
public:
    int removePalindromeSub(string s) {
    int i=0;
    int m=s.size() -1;
    while(i<m){
       if(s[i]!=s[m]) return 2;
       i++;
       m--;
    }
    return 1;
    }
};