class Solution {
public:
    int check(int a, int b){
        int h =1;
        int flag =0;
        while(a > 0 || b > 0){
            if(flag ==0){
                if(a>=h){
                    a=a-h;
                }
                else break;
            } else {
                if(b>= h){
                    b= b-h;
                } else break;
            }
            flag = flag ^1;
            h++;
        }
        return h-1; 
    }
    int maxHeightOfTriangle(int red, int blue) {

        //start with red
        int h1 = check(red,blue);
        int h2 = check(blue,red);

        return max(h1,h2);
    }
};