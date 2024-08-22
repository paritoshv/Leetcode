class Solution {
public:
    int findComplement(int num) {

        int k =num;
        int l =0;
        int ans =0;
        while(k>0){
            ans +=  (k%2==0 ? pow(2,l): 0);
            l++;
            k=k/2;
        }
        return ans;   
    }
};