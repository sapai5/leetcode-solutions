/*
 * Problem: Middle Of The Linked List
 * URL: https://neetcode.io/problems/middle-of-the-linked-list
 * Date: 2026-03-09
 */

        # get length, divide by two, then math.ceil
        # double pass through list
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
class Solution:
#         self.next = next
#         self.val = val
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
        # resultant of that is starting pos
        # use dummy node to start list at that point

        if head is None:
            return None
        iterator=head
        count=0
        while iterator is not None:
            count+=1
            iterator=iterator.next
        start=count//2
        iterator=head
        for _ in range(start):
            iterator=iterator.next
        return iterator
