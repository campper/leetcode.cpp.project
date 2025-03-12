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
        if(s.size()<=1) return s;
        int n = s.size();
        string temp = "";
        string result = "";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                temp = temp + s[j];
                string reverse_tmp = temp;
                std::reverse(reverse_tmp.begin(),reverse_tmp.end());
                if(temp == reverse_tmp){
                    result = result.size()>temp.size()?result:temp; 
                }
            }
            temp = "";
        }
        return result;
    }
};

// int main(){
//     Solution s;
//     s.longestPalindrome("babad");
//     return 0;
// }
// @lc code=end

