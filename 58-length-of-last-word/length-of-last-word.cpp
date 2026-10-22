class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag =0,c=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' '){
                flag = 1;
            }
            if(s[i]==' '&&flag ==1){
                break;
            }
            if(s[i]!=' '){
                c++;
            }
        }
        return c;
    }
};