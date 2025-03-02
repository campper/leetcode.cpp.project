/*
 * @lc app=leetcode.cn id=3351 lang=cpp
 *
 * [3351] 好子序列的元素之和
 */

// @lc code=start
class Solution {
public:
    int sumOfGoodSubsequences(vector<int>& nums) {
        int mod = 1e9 + 7;
        int n = nums.size();
        long long res = 0;
        int zero = 0;
        int one = 0;
        for(int i = 0;i<n;++i){
            if(nums[i] == 0){
                zero++;
            } else if(nums[i] == 1){
                one++;
            }
        }
        res = (res + (1ll << one) % mod - 1 + mod) % mod;
        for(int i = 2;i<=n;++i){
            res = (res * 2) % mod;
        }
        return (res + mod) % mod;
        
    }
};
// @lc code=end

