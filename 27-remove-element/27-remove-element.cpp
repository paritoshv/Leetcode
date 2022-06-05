class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      // if(nums.size()==1 && nums.empty()){return 1;}
      int n= nums.size();
      // int arr[n];
      int k=0;
      for(int i=0;i<n;i++){
          if (nums[i]!=val){
              nums[k]=nums[i];
              k++;
          }
      }
    // for(int i=0;i<n;i++){
    // nums[i]= arr[i];}    
    return k;
    }
};