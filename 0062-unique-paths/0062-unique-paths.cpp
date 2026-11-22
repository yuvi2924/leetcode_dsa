class Solution {
public:
  int fun(int i,int j,int n,int m,vector<vector<int>>&dp){
    if(i<0 || i>=n || j<0 || j>=m) return 0;
    if(i==n-1 && j==m-1) return 1;
 
   if(dp[i][j]!=-1) return dp[i][j];
    int c1=fun(i+1,j,n,m,dp);
    int c2=fun(i,j+1,n,m,dp);

    return  dp[i][j] = c1+c2;
  }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(0,0,n,m,dp);
    }
};