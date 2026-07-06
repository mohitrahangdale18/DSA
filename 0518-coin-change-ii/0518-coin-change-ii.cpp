class Solution {
public:
    int solve(int amount, vector<int>& coins, int idx,
              vector<vector<int>>& dp) {

        if (amount == 0) return 1;
        if (amount < 0 || idx == coins.size()) return 0;

        if (dp[amount][idx] != -1)
            return dp[amount][idx];

        // Take current coin
        int take = solve(amount - coins[idx], coins, idx, dp);

        // Skip current coin
        int skip = solve(amount, coins, idx + 1, dp);

        return dp[amount][idx] = take + skip;
    }

    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(amount + 1,
                               vector<int>(coins.size(), -1));
        return solve(amount, coins, 0, dp);
    }
};