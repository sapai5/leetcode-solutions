/*
 * Problem: Linked List Cycle Detection
 * URL: https://neetcode.io/problems/linked-list-cycle-detection
 * Date: 2026-03-09
 */

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        # cycle can be determined if we've been 'there' before
        # use a slow and fast ptr
