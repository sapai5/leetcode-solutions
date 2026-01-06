#
# Problem: Two Integer Sum
# Difficulty: Easy
# URL: https://neetcode.io/problems/two-integer-sum
# Date: 2026-01-06
#

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen={}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in seen:
                return[seen[complement], i]
            else:
                # add val and index
                seen[nums[i]] = i
