class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int i = 0;
        int k=0;
        int j = nums.size()-1;
        while (i<j){
            if(nums[i] == val){
                if(nums[j]!=val){
                    swap(nums[i],nums[j]);
                    k++;
                    j--;
                } else{
                    while(nums[j]==val && i<j){
                        k++;
                        j--;
                    }
                    swap(nums[i],nums[j]);
                    k++;
                    j--;
                }
            }
            i++;
        }

        if(nums.size() == 1 && nums[0]==val){
            return 0;
        }
        if(j<nums.size() && nums[j]==val){
            k++;
        }
        
        return nums.size()-k;
    }
};