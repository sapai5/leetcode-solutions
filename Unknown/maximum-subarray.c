/*
 * Problem: Maximum Subarray
 * URL: https://neetcode.io/problems/maximum-subarray
 * Date: 2026-03-07
 */

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum=nums[0]
        for i in range(len(nums)):
            curSum=0
            for j in range(i, len(nums)):
                curSum+=nums[j]
                maxSum=max(maxSum, curSum)
        return maxSum
