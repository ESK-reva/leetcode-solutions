# Reverse Linked List

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/reverse-linked-list/

## Approach

The linked list is reversed iteratively using three pointers:
`prev`, `current`, and `next`.

The `next` pointer temporarily stores the next node so that the
remaining list is not lost.

Then the `current` node's `next` pointer is changed to point to
`prev`. After that, `prev` and `current` are moved forward.

The process continues until `current` becomes NULL. At that point,
`prev` becomes the new head of the reversed linked list.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
1 -> 2 -> 3 -> 4 -> 5 -> NULL