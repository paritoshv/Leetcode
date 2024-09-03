class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        for(int i =0;i<s.length();i++){
            int t = (s[i]-'a')+1;
            ans = ans+ to_string(t);
        }
        int sum =0;
        while(k>0){
            sum =0;
            for(char c: ans){
                int m = c-'0';
                sum = sum + m;
            }  
            ans = to_string(sum);
            k--;
        }
        return sum;
    }
};