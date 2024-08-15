class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives =0;
        int tens =0;
        int twenties =0;
        for(int i =0;i<bills.size();i++){
            if(bills[i]==5){
                fives++;
            } else if(bills[i]==10){
                tens++;
                fives--;
            } else if(bills[i]==20){
                if(tens==0){
                    fives--;
                    fives--;
                } else {
                tens--;
                }
                fives--;
                twenties++;
            }

            if(fives <0 || tens <0 || twenties <0){
                return false;
            }
        }
        return true;
    }
};