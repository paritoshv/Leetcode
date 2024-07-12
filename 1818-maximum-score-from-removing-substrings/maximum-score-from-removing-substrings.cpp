class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack <char> st;
        st.push(s[0]);
        char first = 'a';
        char sec = 'b';
        int h =x;
        int l =y;
        int gain =0;
        if(y>x){
            h=y;
            l=x;
            first = 'b';
            sec = 'a';
        }
        for(int i =1;i<s.length();i++){
            if(!st.empty() && st.top()==first && s[i]==sec){
                st.pop();
                gain +=h;
            } else {
                st.push(s[i]);
            }
        }
        string meanwhile = "";
        while(!st.empty()){
            char temp = st.top();
            st.pop();
            meanwhile += temp;
        }
        string meanwhile2 = "";
        for(int i =meanwhile.length()-1;i>=0;i--){
            meanwhile2+= meanwhile[i];
        }


        stack <char> st2;
        st2.push(meanwhile2[0]);
        
        for(int i =1;i<meanwhile2.length();i++){
            if(!st2.empty() && st2.top()==sec && meanwhile2[i]==first){
                st2.pop();
                gain +=l;
            } else {
                st2.push(meanwhile2[i]);
            }
        }

        return gain;
        
    }
};