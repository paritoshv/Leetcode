class Solution {
public:
    int maxSum(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        unordered_set<int> s= {};
        for (int i =0;i<nums.size();i++){
            if(nums[i]>0){
                s.insert(nums[i]);
            }
        }
        int sum =0;
        if(s.empty()){
            sum=nums[0];
           for (int i =1;i<nums.size();i++){
            sum = max(sum,nums[i]);
           } 
        }
          for (auto itr : s) 
            {
                sum = sum+itr;
            } 
        return sum;
        
    }
};