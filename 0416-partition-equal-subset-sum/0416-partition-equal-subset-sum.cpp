class Solution {
public:
    bool solve(int i,vector<int>& nums ,int target,int n,vector<vector<int>>&dp){
        if(target==0)return 1;
        if(target < 0)return 0;
        if(i>=n)return 0;
        if(dp[i][target]!=-1)return dp[i][target];
        bool inc=solve(i+1,nums,target-nums[i],n,dp);
        bool exc=solve(i+1,nums,target,n,dp);

        return dp[i][target]=inc||exc;


    }
    bool canPartition(vector<int>& nums) {
        int target=0;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            target+=nums[i];
        }
        if(target&1) return 0;
        target=target/2;
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return solve(0,nums,target,n,dp);
    }
};