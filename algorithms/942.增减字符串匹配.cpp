/*
 * @lc app=leetcode.cn id=942 lang=cpp
 *
 * [942] 增减字符串匹配
 */

// @lc code=start
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int left = 0, right = n;
        vector<int> res;
        for(int i = 0;i<n;++i){
            if(s[i] == 'I'){
                res.push_back(left++);
            } else {
                res.push_back(right--);
            }
        }
        res.push_back(left);
        return res;
        
    }
};
// @lc code=end

