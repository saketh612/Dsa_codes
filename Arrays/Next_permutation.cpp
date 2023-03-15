#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int index_1,k;
        for(k=n-2;k>=0;k--)
        {
            if(nums[k+1]>nums[k])
            {
                index_1=k;
                break;
            }
        }
        if(k<0)
        reverse(nums.begin(),nums.end());
        else
        {
            for(int i =n-1;i>k;i--)
            {
                if(nums[i]>nums[k]){
                swap(nums[i],nums[k]);
                reverse(nums.begin()+k+1,nums.end());
                }
            }
        }
        
    }
};
// for numbers in lexographical order
//check for lexographical rules