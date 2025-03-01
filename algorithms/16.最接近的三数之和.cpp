/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int closestSum = 1e7;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(l < r){
                int sum = nums[i]+nums[l]+nums[r];
                if(abs(closestSum - target)>abs(sum-target)){
                    closestSum = sum;
                }
                if(sum > target){
                    r--;
                } else if( sum < target){
                    l++;
                } else{
                    return target;
                }
            }
        }
        return closestSum;
        
    }

    int abs(int a){
        return a < 0 ? -a : a;
    }
};
// @lc code=end

