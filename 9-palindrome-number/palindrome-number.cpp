class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if(x<0){
            return false;
        }
        long long r=0;
        while(x!=0){
            long long d = x%10;
            r = r*10+d;
            x = x/10;
        }
        if(r==temp){
            return true;
        }
        else{
            return false;
        }
    }
};