/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int n = haystack.size();
        int m = needle.size();
        haystack = " " + haystack;
        needle = " " + needle;
        vector<int> next(m+1);
        for(int i = 2, j = 0; i <= m; i++){
            while(j && needle[i] != needle[j+1]) j = next[j];
            if(needle[i] == needle[j+1]) j++;
            next[i] = j;
        }
        for(int i = 1, j = 0; i <= n; i++){
            while(j && haystack[i]!= needle[j+1]) j = next[j];
            if(haystack[i] == needle[j+1]) j++;
            if(j == m) return i - m;
        }
        return -1;
        
    }
};
// @lc code=end

