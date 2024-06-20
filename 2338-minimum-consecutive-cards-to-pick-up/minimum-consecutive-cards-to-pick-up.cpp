class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
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