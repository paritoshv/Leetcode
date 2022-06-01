class Solution {
public:
    int lengthOfLastWord(string s) {
        // int len = s.length();
        // int count=0;
        // if(len==1){
        //     if(s[0]!=' '){
        //         return 1;
        //     }
        //     return 0;
        //     }
        // for(int i=1;i<len;i++){
        // if(s[len-i]<='z' && s[len-i]>='a' || s[len-i] >= 'A' && s[len-i] <= 'Z'){
        //        count=count+1;
        //    }
        // if(s[len-i]== ' ' && count>0){
        //         break;
        //     }
        // }
        // return count;
        int len =s.length();
        int count=0;
        for(int i=len-1;i>=0;i--){
        if((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')){
              count=count+1;
        }
        if(count>0 && s[i]==' '){
            break;
        }
        }
    return count;
    }
};