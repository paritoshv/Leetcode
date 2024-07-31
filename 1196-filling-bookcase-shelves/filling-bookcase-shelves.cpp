class Solution {

public:
    int t[1001][1001];
    int solve(int i,vector<vector<int>>& books, int remainingWidth,int maxH, int shelfWidth){

        if(i>=books.size()){
            return maxH;
        }

        if(t[i][remainingWidth]!=-1){
            return t[i][remainingWidth];
        }
        int keep = INT_MAX;
        int skip = INT_MAX;
        if(books[i][0] <= remainingWidth){
            keep = solve(i+1,books,remainingWidth-books[i][0],max(maxH,books[i][1]),shelfWidth);
        }

        skip = maxH + solve(i+1,books,shelfWidth-books[i][0],books[i][1], shelfWidth);

        return t[i][remainingWidth] = min(keep,skip);
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(t,-1,sizeof(t));
        return solve(0,books,shelfWidth,0,shelfWidth);
    }
};