/*
 * Problem: Depth Of Binary Tree
 * URL: https://neetcode.io/problems/depth-of-binary-tree
 * Date: 2026-03-09
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        # try bottom up approach
