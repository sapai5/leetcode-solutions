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
        # if fast ptr passes slow ptr, cycle has been detected
        slow = fast = head
        if head is None:
            return False
        while fast is not None and fast.next is not None:
            slow=slow.next
            fast=fast.next.next
            if slow == fast:
                return True
        return False
