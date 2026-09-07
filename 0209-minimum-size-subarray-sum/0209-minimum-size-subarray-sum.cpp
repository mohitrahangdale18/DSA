class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum=0;
        int c=INT_MAX;
        int j=0;

        for( int i=0; i< nums.size();i++){
            sum+=nums[i];

            while(sum>=target){
                sum=sum-nums[j];
                c=min(c,i-j+1);
                j++;
            }
            
        }
        if(c==INT_MAX) return  0;
        return c;
    }
};