class Solution {
public:
    int solve(int amount, vector<int>& nums, int idx, vector<vector<int>>& dp) {
        if (amount < 0 || idx >= nums.size())
            return 0;
        if (amount == 0)
            return 1;
        if (dp[amount][idx] != -1)
            return dp[amount][idx];
        int ans = 0;
        for (int i = idx; i < nums.size(); i++) {
            ans += solve(amount - nums[i], nums, i,dp);
        }
        return dp[amount][idx] = ans;
    }
    int change(int amount, vector<int>& coins) {
        // int n=coins.size();
        // vecor<int> dp(n,-1);
        vector<vector<int>> dp(amount + 1, vector<int>(coins.size() + 1, -1));
        return solve(amount, coins, 0, dp);
    }
};