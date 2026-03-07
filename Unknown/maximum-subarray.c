/*
 * Problem: Maximum Subarray
 * URL: https://neetcode.io/problems/maximum-subarray
 * Date: 2026-03-07
 */

        curSum = maxSum = nums[0]
        for i in range(1, len(nums)):


            curSum=max(nums[i], curSum+nums[i])
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
            maxSum=max(maxSum, curSum)
