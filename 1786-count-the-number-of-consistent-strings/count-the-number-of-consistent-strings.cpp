class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> allowedChars;
        for(char c : allowed){
            allowedChars.insert(c);
        }
        int ans =0;
        for(int i =0;i<words.size();i++){
            bool consistent = true;
            for(int j =0;j<words[i].size();j++){
                if(allowedChars.find(words[i][j])==allowedChars.end()){
                    consistent =false;
                    break;
                }
            }
            if(consistent){
                ans++;
            }
        }
        return ans;
    }
};