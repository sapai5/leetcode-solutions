/*
 * Problem: Binary Search
 * URL: https://neetcode.io/problems/binary-search
 * Date: 2026-03-10
 */

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # use binary search
        low = 0
        high = len(nums) - 1

        while low <= high:
            mid = (low + high) // 2
            if nums[mid] == target:
                return mid
