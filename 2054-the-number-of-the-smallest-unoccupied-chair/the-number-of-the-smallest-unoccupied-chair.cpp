class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<int> targetTime = times[targetFriend];
        int n = times.size();
        sort(times.begin(),times.end());
        vector<int> chairTime(n);
        //eachTime
        for(int i =0;i<n;i++){
            // each chair
            for(int j =0;j<n;j++){
                if(chairTime[j]<= times[i][0]){
                    chairTime[j]=times[i][1];

                    if(times[i]==targetTime){
                        return j;
                    }
                    break;
                }
            }
        }
        return 0;   
    }
};