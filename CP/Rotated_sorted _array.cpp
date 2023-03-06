class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0,right=nums.size()-1;
        int mid = left+(right-left)/2;
        while(left<=right)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[left]<=nums[mid])
            {
                if(target<nums[mid] && target>=nums[left])
                {
                    right =mid-1;
                }
                else
                {
                    left =mid+1;
                }
            }
            else
            {
                if(nums[mid]<target && target<=nums[right])
                {
                    left =mid+1;
                }
                else
                {
                    right =mid-1;
                }

            }
            mid = left+(right-left)/2;
            
        }
        return -1;
    }
};