#
# Problem: Duplicate Integer
# Difficulty: Easy
# URL: https://neetcode.io/problems/duplicate-integer
# Date: 2026-01-06
#

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        occurence_map={}
        for i in nums:
            if i in occurence_map:
                occurence_map[i]+=1
            else:
                occurence_map[i]=1
        contains_dupes=any(count > 1 for count in occurence_map.values())
        if contains_dupes:
            return True
        else:
            return False
