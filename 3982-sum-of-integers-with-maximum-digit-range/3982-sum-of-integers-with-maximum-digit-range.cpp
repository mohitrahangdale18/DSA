class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int ans  = 0;
        unordered_map<int,int> m;
        int digRange = 0;
        for(int num : nums){
            int x = num;
            int mini = 10;
            int maxi = -1;
            while(x){
                int dig = x%10;
                x /= 10;
                mini = min(mini,dig);
                maxi = max(maxi,dig);
            }
            digRange = max(digRange,maxi-mini);
            m[maxi-mini] += num;
        }

        for(auto &[range,num] : m){
            if(range == digRange) ans = num;
        }
        return ans;
    }
};