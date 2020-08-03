/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, 0);
        int i = 0;
        int len= s.size();
        int ans;
        for(int j=0;j<len;j++)
        {
            i = max(i, m[s[j]]);
            m[s[j]] = j+1;
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};

int main(void)
{
    Solution s;
    std::string test = "abcabcbb";
    int ans = s.lengthOfLongestSubstring(test);
    return 0;
}
// @lc code=end

