/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while (left < right) {
            while (left < n && !isalnum(s[left])) {
                left++;
            }
            while (right >= 0 && !isalnum(s[right])){
                right--;
            }
            if (left >= right) {
                return true;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }

    bool isalnum(char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
    }

    char tolower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch + 32;
        }
        return ch;
    }

    bool isPalindrome1(string s) {
        string filteredString;
        for (char ch: s) {
            if (isalnum(ch)) {
                filteredString += tolower(ch);
            }
        }
        string reversedString = filteredString;
        reverse(reversedString.begin(), reversedString.end());
        return filteredString == reversedString;
    }
    
};
// @lc code=end

