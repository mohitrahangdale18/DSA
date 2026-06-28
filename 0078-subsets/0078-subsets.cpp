class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void sub(int index,vector<int> &nums){
        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        sub(index+1,nums);
        subset.pop_back();

        sub(index+1,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        sub(0,nums);
        return ans;
    }
};