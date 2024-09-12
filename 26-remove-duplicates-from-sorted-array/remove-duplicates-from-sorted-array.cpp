class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i =0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
        }
        int j =0;
        for(int i : s){
            nums[j]=i;
            j++;
        }
        return j;
    }
};