/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<unordered_map>
#include<vector>

class Solution {
    /* 设置一个 map 容器 hash 用来记录元素的值与索引，然后遍历数组 nums。
    每次遍历时使用临时变量 tmp 用来保存目标值与当前值的差值。
    在此次遍历中查找 hash，查看是否有与 tmp 一致的值，如果查找成功则返回查找值的索引值与当前变量的值 i。
    如果未找到，则在 hash 保存该元素与索引值 i。*/
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //哈希表存储索引值
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int tmp=target-nums[i];
            if(hash.count(tmp)) //如果在哈希表里找到差值，则返回差值所在索引值和当前元素索引值
            {
                return {hash[tmp],i};
            }
            else{ //如果没找到，则将当前元素和索引值存储到哈希表中 map<当前元素,索引值>
                hash[nums[i]] = i;
            }   
        }
        return{-1,-1}; //如果不存在，则返回{-1,-1}
    }
};
// @lc code=end

