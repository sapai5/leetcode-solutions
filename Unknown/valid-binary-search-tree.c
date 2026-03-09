/*
 * Problem: Valid Binary Search Tree
 * URL: https://neetcode.io/problems/valid-binary-search-tree
 * Date: 2026-03-09
 */

        # need an inorder traversal function (recursive)
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        # need to keep track of prev
#         self.right = right

#         self.val = val
#         self.left = left
#     def __init__(self, val=0, left=None, right=None):
# class TreeNode:
        # return the recursive function

        self.prev = float("-inf")

        def inorder(node):
            if node is None:
                return True
            if not inorder(node.left):
                return False
            if node.val <= self.prev:
                return False
            self.prev = node.val
            if not inorder(node.right):
                return False
            return True
        return inorder(root)
