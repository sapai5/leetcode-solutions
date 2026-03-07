/*
 * Problem: Products Of Array Discluding Self
 * URL: https://neetcode.io/problems/products-of-array-discluding-self
 * Date: 2026-03-07
 */

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # need to double pass
        # mult by prefix -- pass 1
        # mult by suffix -- pass 2
        # edge case:
        # 1) nums size = 0

        if len(nums) == 0:
            return []
        
        res = [1] *len(nums)
        prefix=1
        suffix=1

        # prefix
        for i in range(len(nums)):
            res[i]=prefix
            prefix*=nums[i]
        #suffix
        for i in range(len(nums)-1, -1, -1):
            res[i]*=suffix
            suffix*=nums[i]
        return res
