#
# Problem: Top K Elements In List
# Difficulty: Medium
# URL: https://neetcode.io/problems/top-k-elements-in-list
# Date: 2026-01-06
#

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
         hashmap={}
         for n in nums:
            if n not in hashmap:
                hashmap[n] = 1
            else:
                hashmap[n] += 1
         sorted_lst=sorted(hashmap.items(), key=lambda x : x[1], reverse=True)
         return[item[0] for item in sorted_lst[:k]]
