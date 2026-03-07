/*
 * Problem: Longest Substring Without Duplicates
 * URL: https://neetcode.io/problems/longest-substring-without-duplicates
 * Date: 2026-03-07
 */

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # intuition: hash each character to it's occurence.
        # if char not in hash, hash it
        # else return hashtable size
        # time complexity: O(26) -> O(1)
        # same for space complexity
        # edge cases:
        # 1) str length=0
        if len(s) == 0:
