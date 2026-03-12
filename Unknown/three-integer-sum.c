/*
 * Problem: Three Integer Sum
 * URL: https://neetcode.io/problems/three-integer-sum
 * Date: 2026-03-12
 */

        ans = []
        nums.sort()
        low = 0
        high = 0

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            while low < high:
            low = i+1
            high = len(nums) - 1
                if total > 0:
                    high-=1
                elif total < 0:
                    low+=1
                else:
                    ans.append([nums[i], nums[low], nums[high]])
                    low+=1
                    while low < high and nums[low] == nums[low-1]:
                    high -=1
                        low+=1
        return ans

        # for loop + two pointers
                total = nums[i] + nums[low] + nums[high]
