/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        for(int i = n-1;i>=0;--i){
            digits[i] += carry;
            if(digits[i] == 10){
                digits[i] = 0;
            } else {
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// @lc code=end

