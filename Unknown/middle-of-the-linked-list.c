/*
 * Problem: Middle Of The Linked List
 * URL: https://neetcode.io/problems/middle-of-the-linked-list
 * Date: 2026-03-09
 */

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow=head
        fast=head
        while fast and fast.next is not None:
            slow=slow.next
            fast=fast.next.next
        # single pass
        # time complexity: O(n)
        return slow
