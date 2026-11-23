class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,char>a,b;
        for(int i=0; i<s.size(); i++){
        if(a.count(s[i])&&a[s[i]]!=t[i]){
            return false;
        }
        if(b.count(t[i])&&b[t[i]]!=s[i]){
            return false;
        }
        a[s[i]]=t[i];
        b[t[i]]=s[i];
        }
        return true;
    }
};