class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.length()==0){
            return 0;
        }
        int opens =0;
        int ans =0;
        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
                opens++;
            } else{
                if(opens>0){
                    opens--;
                } else {
                    ans++;
                }
            }
        }
        return opens +ans;      
    }
};