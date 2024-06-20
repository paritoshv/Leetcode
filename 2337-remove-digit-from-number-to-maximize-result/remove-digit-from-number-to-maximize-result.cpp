class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans1 = "";
        for(int j =0;j<number.length();j++){
            if(number[j]==digit){
                string temp = number.substr(0, j) + number.substr(j+1);
                ans1 = max(ans1, temp);
            }
        }

        number = ans1;

        return number;
        
    }
};