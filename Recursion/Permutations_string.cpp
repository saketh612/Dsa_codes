class Solution {
    private:
    void solve(vector<vector<int>> & ans, vector<int>nums, int i)
    {
        if(i>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int j =i;j<nums.size();j++)
        {
            swap(nums[j],nums[i]);
            solve(ans,nums,i+1);
            //back tracking to get to the initial state
            swap(nums[j],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index =0;
        solve(ans,nums,index);
        return ans;
    }
};