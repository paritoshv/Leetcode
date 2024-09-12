class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;

        int s = nums.size();
        k = k%s;
        int i = (s-k);

        for(int j =0;j<nums.size();j++){
            temp.push_back(nums[(j+i)%s]);
        }
        for(int j =0;j<nums.size();j++){
            nums[j]=temp[j];
        }

    }
};