class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int pool =0;
       for(int i =0;i<arr.size();i++){
            if(arr[i]%2 !=0){
                pool++;
            } else {
                pool =0;
            }
            if(pool ==3){
                return true;
            }
       }
       return false; 
    }
};