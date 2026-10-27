class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> ans = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(auto i : words){
            string s1;
            for(auto j : i){
                s1+=ans[j-'a'];
                }
                s.insert(s1);
        }
        return s.size();
    }
};