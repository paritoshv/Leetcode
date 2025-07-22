#include <unordered_set>
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        std::unordered_set<int> s;
        long long maxSum = 0;
        long long currentSum = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            while (s.find(nums[right]) != s.end()) {
                currentSum -= nums[left];
                s.erase(nums[left]);
                ++left;
            }
            currentSum += nums[right];
            s.insert(nums[right]);
            maxSum = std::max(maxSum, currentSum);
        }
        return static_cast<int>(maxSum);
    }
};