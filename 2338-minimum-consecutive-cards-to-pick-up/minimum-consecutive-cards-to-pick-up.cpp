class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        // int i =0;
        // int j =1;
        // int ans =cards.size()+1;
        // while(i<cards.size() && j< cards.size()){
        //     while(j<cards.size() && cards[i]!=cards[j] ){
        //         j++;
        //     }
        //     if(j<cards.size() && cards[i]==cards[j])
        //     ans = min(ans, j-i+1);
        //     i++;
        //     j=i+1;
        // }

        // if(ans == cards.size()+1){
        //     return -1;
        // }

        // return ans;
        map<int,int> store;
        int ans = cards.size()+1;
        for(int i =0; i<cards.size();i++){
            if(store.find(cards[i])!=store.end()){
                ans = min(ans, i-store[cards[i]]+1);
                store[cards[i]] = i;
            } else {
                store[cards[i]] = i;
            }
        }
        if(ans == cards.size()+1){
            return -1;
        }

        return ans;


    }
};