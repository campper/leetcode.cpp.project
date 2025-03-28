/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // 方法一，动态规划。
        // 时间复杂度 O(n^2)，空间复杂度 O(n^2)。
        vector<vector<int>> res;
        if(numRows == 0) return res;
        res.push_back({1});
        for(int i = 1; i < numRows; i++){
            vector<int> row(i+1,1);
            for(int j = 1; j < i; j++){
                row[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(row);
        }
        return res;
        
    }
};
// @lc code=end

