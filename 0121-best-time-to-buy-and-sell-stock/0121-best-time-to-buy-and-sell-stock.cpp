class Solution {
public:
    vector<vector<int>> dp;
    int fun(vector<int>& a, int i, int n, int k) {
        // recursion(memoiazation)
        // base case
        if (i == n)
            return 0;
        if (k == 0)
            return 0;
        if (dp[i][k] != -1)
            return dp[i][k];
        if (k == 2) {
            // buy
            int c1 = fun(a, i + 1, n, k - 1) - a[i];
            int c2 = fun(a, i + 1, n, k);
            return dp[i][k] = max(c1, c2);
        } else {
            // sell
            int c1 = fun(a, i + 1, n, k - 1) + a[i];
            int c2 = fun(a, i + 1, n, k);
            return dp[i][k] = max(c1, c2);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        dp.assign(n, vector<int>(5, -1));
        return fun(prices, 0, prices.size(), 2);
    }
};
