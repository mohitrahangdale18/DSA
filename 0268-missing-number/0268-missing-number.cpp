class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num=0;
        int sum=0;
        for( int i=1;i<=nums.size();i++){
            num+=i;
        }
        for( int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return num-sum;
    }
};