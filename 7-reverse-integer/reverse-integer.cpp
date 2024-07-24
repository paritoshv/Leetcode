class Solution {
public:
    int reverse(int x) {
        double k =0;
        int p = abs(x);
        while(p>0){
            int m =p%10;
            k = k*10 + m;
            p=p/10;
        }
        cout << k;
        if((x > 0 ? k > (pow(2,31) -1) : false) || (x < 0 ? (k > pow(2,31)) : false)){   
          return 0;  
        }
        else {
            return x > 0 ? k : (-1)* k;
        }
        
    }
};