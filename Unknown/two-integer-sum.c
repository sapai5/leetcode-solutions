/*
 * Problem: Two Integer Sum
 * URL: https://neetcode.io/problems/two-integer-sum
 * Date: 2026-03-05
 */

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen={}
        for i in range(len(nums)):
            seen[nums[i]]=i
        print(seen)

        for j in range(len(nums)):
            comp=target-nums[j]
            if comp in seen and seen[comp] is not j:
                return [j, seen[comp]]
        
