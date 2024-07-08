#include <queue>
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i =1;i<=n;i++){
            q.push(i);
        }
        
        while(q.size()>1){
            int t = k;
            while(t>0){
                int temp = q.front();
                q.pop();
                t--;
                if(t!=0){
                    q.push(temp);
                }
            }
        }

        return q.front();
    }
};