/*
 * Problem: Invert A Binary Tree
 * URL: https://neetcode.io/problems/invert-a-binary-tree
 * Date: 2026-03-09
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
