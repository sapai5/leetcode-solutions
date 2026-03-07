/*
 * Problem: Is Anagram
 * URL: https://neetcode.io/problems/is-anagram
 * Date: 2026-03-07
 */

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # two hashmaps, key=character : value=occurences
        # return true if hash1=hash2, else false
        # edge cases: either a or b is empty or a and b are not same size

        if len(s) != len(t):
            return False


        hash1={}
