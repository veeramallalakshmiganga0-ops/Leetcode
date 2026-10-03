class Solution {
public:
vector<string>s;
void solve(int open , int close,string s1,int n ){
    if(open==n && close ==n){
        s.push_back(s1);
            }
    if(open<n){
        solve(open+1,close,s1+'(',n);
    }
    if(close<open){
        solve(open,close+1,s1+')',n);
    }
}
    vector<string> generateParenthesis(int n) {
        string k="";
        int open =0;
        int close =0;
        solve(open,close,k,n);
        return s;
    }
};