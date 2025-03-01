/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 0) return {};
        int n = digits.size();
        for(int i = n-1; i >= 0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
            } else {
                digits[i] = 0;
                if(i == 0){
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
        }
        return digits;
        
    }
};
// @lc code=end

