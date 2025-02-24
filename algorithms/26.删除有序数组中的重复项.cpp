/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        nums.resize(i+1);
        return nums.size();
        
    }
};
// @lc code=end

