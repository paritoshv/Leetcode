class Solution {
public:
    int reverse(int x) {
        int k =0;
        int p = abs(x);
        while(p>0){
            if(k>INT_MAX/10 || k<INT_MIN/10) return 0;
            int m =p%10;
            k = k*10 + m;
            p=p/10;
        }
        cout << k;

            return x > 0 ? k : (-1)* k;

        
    }
};