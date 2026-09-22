class Solution {
public:
 void solve(int n,vector<string> &res,string &tmp,int open,int close) {
        //base case backtracking
        if(open==n && close == n){
            res.push_back(tmp);
            return;
        }
        // for open
        if(open<n){
         tmp.push_back('(');
         solve(n,res,tmp,open +1,close);
         tmp.pop_back();
        }
        //close
          if(close<open){
         tmp.push_back(')');
         solve(n,res,tmp,open,close+1);
         tmp.pop_back();}
 }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string tmp="";
        solve(n,res,tmp,0,0);
        return res;
    }
};