#include <iostream>
using namespace std;
/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string str = s;

        if(n < 2) return s;
        int max_len = 1, start = 0;
        char a[1000];
        // std::reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            char c = s[i]; 
        }
        return "";
        
    }
};

// int main(){
//     Solution s;
//     s.longestPalindrome("babad");
//     return 0;
// }
// @lc code=end

