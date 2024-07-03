class Solution {
public:
    int minDifference(vector<int>& nums) {

        if(nums.size()<=4) return 0;

        sort(nums.begin(), nums.end());

        int ans = 0;
        
        ans = nums[nums.size()-4]-nums[0];

        ans = min(ans,nums[nums.size()-1]-nums[3]);

        ans = min(ans,nums[nums.size()-3]-nums[1]);

        ans = min(ans,nums[nums.size()-2]-nums[2]);
        
        return ans;
        
    }
};