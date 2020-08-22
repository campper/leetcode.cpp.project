/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> res(256,0);
        int len = s.size();
        int left = 0;
        int ans = 0;
        for(int i =0;i<len;i++){
            left = max(left,res[s[i]]);
            res[s[i]] = i + 1;
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};
// @lc code=end

