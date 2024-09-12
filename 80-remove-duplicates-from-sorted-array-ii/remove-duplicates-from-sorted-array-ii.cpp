class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2 , j=2 ;
        if(nums.size()<=2)
        {return nums.size();}
        for(j=2;j<nums.size();j++)
       {
        if(nums[j]!=nums[i-2])
        {
            nums[i++]=nums[j];
        }
       }
       return i;
    }
};