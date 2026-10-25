bool palindrome(string s){
    string m =s;
    reverse(m.begin(),m.end());
    if(m ==s){
        return true;
    }
    else{
        return false;
    }
}
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(palindrome(words[i])==true){
                return words[i];
                break;
            }
        }
        return "";
    }
};