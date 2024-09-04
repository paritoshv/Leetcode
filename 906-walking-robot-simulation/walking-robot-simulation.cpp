class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

        set<pair<int, int>> obstacleSet;
        for (auto& obs : obstacles) {
            obstacleSet.insert({obs[0], obs[1]});
        }

        int dir = 0, x = 0, y = 0, maxDist = 0;

        for(int i =0;i<commands.size();i++){
            if(commands[i] == -2){
                dir = (dir - 1 + 4) % 4;
            }
            else if (commands[i] == -1) { 
                dir = (dir + 1) % 4;
            } 
            else {
                int dx = 0, dy = 0;
                if (dir == 0) dy = 1;      // Moving north
                else if (dir == 1) dx = 1; // Moving east
                else if (dir == 2) dy = -1; // Moving south
                else if (dir == 3) dx = -1; // Moving west
                
                while (commands[i]-- > 0) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (obstacleSet.find({nx, ny}) != obstacleSet.end()) {
                        break; // Stop if there's an obstacle
                    }
                    x = nx;
                    y = ny;
                }
                maxDist = max(maxDist, x * x + y * y);
            }
        }
        return maxDist;
    }
};