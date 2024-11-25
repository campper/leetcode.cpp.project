/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        if(n==0) return "";
        string ans = strs[0];
        for(int i=1;i<n;i++)
        {
            int j=0;
            for(;j<ans.size() && j<strs[i].size();j++)
            {
                if(ans[j] != strs[i][j]) break;
            }
            ans = ans.substr(0,j);
        }
    }
};
// @lc code=end

