class Solution {
public:
    int fun(int t, vector<int>& a, int i, int n, vector<vector<int>>& dp) {
        // recursion
        if (t == 0)
            return 1; // jb target 0 hoga return kro 1
        if (i == n)
            return 0;
        if (dp[i][t] != -1)
            return dp[i][t];
        if (t < a[i])
            return fun(t, a, i + 1, n, dp);
        else {
            int c1 = fun(t - a[i], a, i, n, dp); // take it
            int c2 = fun(t, a, i + 1, n, dp);    // not take it
            return dp[i][t] = c1 + c2;
        }
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return fun(amount, coins, 0, coins.size(), dp);
    }
};