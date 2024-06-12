class Solution {
public:
    void sortColors(vector<int>& nums) {
        int reds =0;
        int whites =0;
        int blues =0;

        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                reds++;
            } else if(nums[i]==1){
                whites++;
            } else {
                blues++;
            }
        }
        int j=0;
        while(reds>0){
            nums[j]=0;
            reds--;
            j++;
        }
        while(whites>0){
            nums[j]=1;
            whites--;
            j++;
        }
        while(blues>0){
            nums[j]=2;
            blues--;
            j++;
        }
    }
};