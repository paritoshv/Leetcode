class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long long score =0;
        for(int i =0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k>0){
            int m = pq.top();
            pq.pop();
            score+= m;
            pq.push(ceil(m/3.0));
            k--;
        }
        
        return score;
    }
};