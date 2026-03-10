/*
 * Problem: Lowest Common Ancestor In Binary Search Tree
 * URL: https://neetcode.io/problems/lowest-common-ancestor-in-binary-search-tree
 * Date: 2026-03-10
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # perhaps a dfs
