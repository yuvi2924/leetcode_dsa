class Solution {
public:
    int fun(vector<int>& a, int i, int n, vector<int>& dp) {
        if (i == n)
            return 0;
        // base case
        if (i == n + 1)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int yes = fun(a, i + 2, n, dp) + a[i];
        int no = fun(a, i + 1, n, dp);
        return dp[i] = max(yes, no);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return fun(nums, 0, nums.size(), dp);
    }
};