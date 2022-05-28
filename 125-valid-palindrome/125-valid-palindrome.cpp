class Solution {
public:
    bool isPalindrome(string s) {
        string m = "";
        int k = s.size();
        for(int i=0;i< k;i++){
         if ((s[i] < 'A' || s[i] > 'Z') &&
            (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
            
            continue; }
         m+=s[i];   
        }
        for(int i=0;i< m.length();i++){
               if(m[i] >= 'A' && m[i] <= 'Z'){
                   m[i]=m[i]+32;
               }   
                }
        string p;
        p=m;
        reverse(m.begin(),m.end());
        cout<< m;
    
        return p==m;
        
    } 
};