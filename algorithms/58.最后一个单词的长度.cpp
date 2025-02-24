/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()) return 0;
        int i = s.size() - 1;
        while(i >= 0 && s[i] == ' ') i--;
        int j = i;
        while(j >= 0 && s[j] != ' ') j--;
        return i - j;
        
    }
};
// @lc code=end

