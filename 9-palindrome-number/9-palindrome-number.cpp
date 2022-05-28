class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int reversednum=0 ;
    while(x > reversednum){
        reversednum= reversednum*10 + x%10;
        x=x/10;
    }
    if(x==reversednum || x == reversednum/10){
        return true;
    }
    else{
        return false;        
    }
    
    
    
    }
};