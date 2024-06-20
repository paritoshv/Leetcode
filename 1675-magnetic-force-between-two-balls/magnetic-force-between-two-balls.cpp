class Solution {
public:
    bool canPlaceBalls(int x,vector<int>& position, int m){
        int s = position[0];
        int placed =1;
        for(int i = 1; i< position.size() && placed < m ; i++){
            if(position[i]-s >= x){
                placed++;
                s = position[i];
            }
        }

        return m == placed;
    }
    int maxDistance(vector<int>& position, int m) {
        int ans =0;
        sort(position.begin(), position.end());
        //gap can go from 1 to max of postion/(m-1). m-1
        int l =1;
        int h = ceil(position[position.size()-1]/(m-1));

        while(l<=h){
            int mid = l + (h-l)/2;

            if(canPlaceBalls(mid, position, m)){
                ans = mid;
                l=mid+1;
            } else {
                h =mid-1;
            }
        }

        return ans;
    }
};