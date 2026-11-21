
class Solution {
public:
    int fun(vector<int>& a, int i, int buy, int fee, int n,
            vector<vector<int>>& dp) {

        if (i == n)
            return 0;

        if (dp[i][buy] != -1)
            return dp[i][buy];

        if (buy == 1) // buy
        {
            int c1 = fun(a, i + 1, 0, fee, n, dp) - a[i];
            int c2 = fun(a, i + 1, 1, fee, n, dp);

            return dp[i][buy] = max(c1, c2);
        }
        else // sell
        {
            int c1 = fun(a, i + 1, 1, fee, n, dp) + a[i] - fee;
            int c2 = fun(a, i + 1, 0, fee, n, dp);

            return dp[i][buy] = max(c1, c2);
        }
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return fun(prices, 0, 1, fee, n, dp);
    }
};

