class Solution {
public:
    double myPow(double x, int n) {
if(n>=0){
    return pow(x,n);
}
        else{
            return 1/pow(x,abs(n));
        }
        
    }
    double pow(double x, long long n){
        if(n==0){
            return 1;
        }
        if(n%2==0){
            double temp = myPow(x,n/2);
                return temp*temp;
        }
        else{
            double temp = myPow(x,n/2);
            return x*temp*temp;
        }
    }
};