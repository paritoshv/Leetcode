class Solution {
public:
   int majorityElement(vector<int>& nums) {
   int n=nums.size();
   int candidate =nums[0];
   int count =0;
       for(int i=0;i<n;i++){
         if(nums[i]==candidate){
             count++;
         }
        else if(nums[i]!=candidate && count!=0){
             count--;
         }
        else if(nums[i]!=candidate && count==0){
             candidate=nums[i];
             count++;
         }
       } 
    return candidate;
    }
};