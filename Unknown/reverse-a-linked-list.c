/*
 * Problem: Reverse A Linked List
 * URL: https://neetcode.io/problems/reverse-a-linked-list
 * Date: 2026-03-08
 */

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None
