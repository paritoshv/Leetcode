class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i =0;
        int sum=0;
        int n =chalk.size();
        for(int i =0;i<n;i++){
            sum+=chalk[i];
            if(sum>k){
                break;
            }
        }
        k=k%sum;
        while(k>=chalk[i]){
            k=k-chalk[i];
            i++;
        }
        return i;
    }
};