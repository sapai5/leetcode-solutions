/*
 * Problem: Merge Two Sorted Linked Lists
 * URL: https://neetcode.io/problems/merge-two-sorted-linked-lists
 * Date: 2026-03-09
 */

        # can be done inplace
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # need to iterate through both at the same time, and point val of 1 to val of next
