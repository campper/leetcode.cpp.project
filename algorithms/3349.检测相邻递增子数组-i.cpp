/*
 * @lc app=leetcode.cn id=3349 lang=cpp
 *
 * [3349] 检测相邻递增子数组 I
 */

// @lc code=start
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0;i<n-k;++i){
            if(nums[i] < nums[i+k]){
                return true;
            }
        }
        return false;      
    }
};
// @lc code=end

