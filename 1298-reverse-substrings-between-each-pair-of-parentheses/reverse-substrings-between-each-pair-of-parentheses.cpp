class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> indx;
        string result ="";
        int i =0;
        while(i<s.length()){
            if(s[i]=='('){
                indx.push(result.length());
            } else if(s[i]==')') {
                int temp =indx.top();
                indx.pop();
                reverse(result.begin()+temp,result.end());
            } else{
                result += s[i];
            }
            i++;
        }
        return result;
    }
};