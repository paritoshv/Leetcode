class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int nOne =0;
        int n = nums.size();
        int ans = n;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                nOne++;
            }
        }
        int zeroes=0;
        for(int j = 0;j<nOne;j++){
                if(nums[j]==0){
                    zeroes++;
                }
        }
        ans = min(ans,zeroes);
        for(int i =1;i<n;i++){
            if(nums[(i-1)%n]==0){
                zeroes--;
            }
            if(nums[(i-1+nOne)%n]==0){
                zeroes++;
            }
            ans = min(ans,zeroes);
        }
        return ans;
    }
};