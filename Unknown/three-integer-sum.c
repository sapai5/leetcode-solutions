/*
 * Problem: Three Integer Sum
 * URL: https://neetcode.io/problems/three-integer-sum
 * Date: 2026-03-12
 */

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # for loop + two pointers
        ans = []
        nums.sort()
        lo = 0
        high = 0   

        for i in range(len(nums)):
            while lo < high:
                if total < 0:
                    lo+=1
                elif total > 0:
                    high-=1
                    ans.append([nums[lo], nums[high], nums[i]])
            lo = i + 1
            high = len(nums) - 1
                total = nums[lo] + nums[high] + nums[i]
                else:
                    lo += 1
                    high -=1
                    while lo < high and nums[lo] == nums[lo-1]:
            if i > 0 and nums[i] == nums[i-1]:
                continue
                        lo +=1
