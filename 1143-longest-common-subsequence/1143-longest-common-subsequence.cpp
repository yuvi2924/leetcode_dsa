class Solution {
public:
    vector<vector<int>> dp;
    int fun(string& s1, string& s2, int i, int j) {

        int n = s1.size();
        int m = s2.size();
        if (i == n || j == m)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s1[i] == s2[j])
            return dp[i][j] = 1 + fun(s1, s2, i + 1, j + 1);

        int c1 = fun(s1, s2, i + 1, j);
        int c2 = fun(s1, s2, i, j + 1);
        return dp[i][j] = max(c1, c2);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        // size (n+1) × (m+1)
        dp.assign(n + 1, vector<int>(m + 1, -1));
        return fun(text1, text2, 0, 0);
    }
};