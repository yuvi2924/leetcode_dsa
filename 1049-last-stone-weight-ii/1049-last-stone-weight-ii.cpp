
class Solution {
public:
    int fun(vector<int>& a, int i, int t, int n,
            vector<vector<int>>& dp) {
                //base case
        if (i == n)
            return 0;
        if (dp[i][t] != -1)
            return dp[i][t];
        if (a[i] <= t) {
            int c1 = a[i] + fun(a, i + 1, t - a[i], n, dp);
            int c2 = fun(a, i + 1, t, n, dp);
            return dp[i][t] = max(c1, c2);
        } 
        else {
            return dp[i][t] = fun(a, i + 1, t, n, dp);
        }
    }
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += stones[i];
        }
        int tar = sum / 2;
        vector<vector<int>> dp(n, vector<int>(tar + 1, -1));
        int best = fun(stones, 0, tar, n, dp);
        return sum - 2 * best;
    }
};