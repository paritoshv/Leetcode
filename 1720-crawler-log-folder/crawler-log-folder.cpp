class Solution {
public:
    int minOperations(vector<string>& logs) {
        int d =0;
        for(int i =0;i<logs.size();i++){
            if(logs[i] == "../" && d>0){
                d--;
            }
            if(logs[i] != "../" && logs[i] != "./"){
                d++;
            }
        }
        return d;
    }
};