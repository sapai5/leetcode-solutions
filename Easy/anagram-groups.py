#
# Problem: Anagram Groups
# Difficulty: Easy
# URL: https://neetcode.io/problems/anagram-groups
# Date: 2026-01-06
#

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dictionary=defaultdict(list)
        for s in strs:
            dictionary[''.join(sorted(s))].append(s)
        return list(dictionary.values())
