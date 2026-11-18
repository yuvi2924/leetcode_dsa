class Solution {
public:
    vector<vector<int>> dp;

    int fun(vector<int>& a, int n, int i, int k) {
        if (i == n)
            return 0;

        if (dp[i][k] != -1)
            return dp[i][k];

        if (k == 2) {
            // BUY
            int c1 = fun(a, n, i + 1, 1) - a[i];
            int c2 = fun(a, n, i + 1, 2);

            return dp[i][k] = max(c1, c2);
        }
        else {
            // SELL
            int c1 = fun(a, n, i + 1, 2) + a[i];
            int c2 = fun(a, n, i + 1, 1);

            return dp[i][k] = max(c1, c2);
        }
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        dp.assign(n, vector<int>(3, -1));

        return fun(prices, n, 0, 2);
    }
};