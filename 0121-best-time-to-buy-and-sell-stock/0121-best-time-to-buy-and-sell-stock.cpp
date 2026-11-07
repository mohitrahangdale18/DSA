class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int bb=nums[0];
        int maxp=0;

        for(int i=0; i<nums.size();i++){
            if(bb<nums[i]){
              maxp=max(maxp,nums[i]-bb);  
            }
            bb=min(nums[i],bb);

        }
        return maxp;
    }
};