class Solution {
public:
    bool isHappy(int n) {
        while(n!=1&&n!=4){
            int res=0;
        while(n>0){
            int d = n%10;
            res+= d*d;
            n=n/10;
        }
        n=res;
        }
       return n==1;
    }
};