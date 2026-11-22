class Solution {
public:
  int fun(vector<int>&a,int k,int i,int n,vector<vector<int>>&dp){
    if(i==n) return 0;
    if(k==0) return 0;
     if(dp[i][k]!=-1) return dp[i][k];
    if(k%2==0){
        //buy
        int c1=fun(a,k-1,i+1,n,dp)-a[i];
        int c2=fun(a,k,i+1,n,dp);
      return dp[i][k] = max(c1,c2);
    }
    else {//sell
       int c1=fun(a,k-1,i+1,n,dp)+a[i];
        int c2=fun(a,k,i+1,n,dp);
     return dp[i][k]= max(c1,c2);
    }
  }
    int maxProfit(int k, vector<int>& prices) {
         k=k*2;
         int n = prices.size();
         vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return fun(prices,k,0,n,dp);
    }
};