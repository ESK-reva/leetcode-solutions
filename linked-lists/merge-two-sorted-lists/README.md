# Merge Two Sorted Lists

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/merge-two-sorted-lists/

## Approach

Two sorted linked lists are merged by comparing the current nodes of
both lists.

A dummy node is used to simplify the process of creating the merged
list. The smaller node is attached to the merged list and the
corresponding list pointer is moved forward.

The process continues until one of the lists becomes empty. The
remaining nodes of the other list are then attached to the merged list.

## Time Complexity

O(n + m)

where n and m are the lengths of the two linked lists.

## Space Complexity

O(1)

The existing nodes are rearranged without creating a new linked list.

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
List 1: 1 -> 2 -> 4
List 2: 1 -> 3 -> 4