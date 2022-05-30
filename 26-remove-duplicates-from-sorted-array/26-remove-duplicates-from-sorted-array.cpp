class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int s=0;
    int p=0;
        for(int i=1;i<nums.size();++i){
          if(nums[p]!=nums[i]){
             nums[s]=nums[p];
             s++;
             p=i;
     }
    }
nums[s]=nums[p];
return s+1;
   
    }
};