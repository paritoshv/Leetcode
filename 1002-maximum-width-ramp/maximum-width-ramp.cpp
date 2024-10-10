class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int maxWidth =0;
        int minIndex = n;
        // for (int i =0;i<n-1;i++){
        //     for(int j =i+1;j<n;j++){
        //         if(nums[i] <= nums[j]){
        //            maxWidth = max(maxWidth,j-i);
        //         }
        //     }
        // }
        // return maxWidth;
        vector<int> indices(n);
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }
        sort(indices.begin(), indices.end(), [&](int i, int j) {
            return nums[i] != nums[j] ? nums[i] < nums[j] : i < j;
        });

        for (int i =0;i<n;i++){
            maxWidth = max(maxWidth,indices[i]-minIndex);
            minIndex = min(minIndex,indices[i]);
        }
        return maxWidth;
    }
};