/*
 * Problem: Valid Binary Search Tree
 * URL: https://neetcode.io/problems/valid-binary-search-tree
 * Date: 2026-03-09
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        self.prev = float("-inf")
