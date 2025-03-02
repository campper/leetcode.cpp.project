/*
 * @lc app=leetcode.cn id=944 lang=cpp
 *
 * [944] 删列造序
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int res = 0;
        for(int j = 0;j<m;++j){
            for(int i = 1;i<n;++i){
                if(strs[i][j] < strs[i-1][j]){
                    res++;
                    break;
                }
            }
        }
        return res;
        
    }
};
// @lc code=end

