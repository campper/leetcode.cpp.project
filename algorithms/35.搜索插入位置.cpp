/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if(nums.size() == 0) return 0;
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] < target){
                i++;
            }
        }
        return i;     
    }
};
// @lc code=end

