# Binary Search

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/binary-search/

## Approach

The array is sorted, so binary search can be used.

Two pointers, `left` and `right`, represent the current search
range. The middle index is calculated and the middle element is
compared with the target.

- If the middle element equals the target, its index is returned.
- If the middle element is smaller than the target, the left half
  is discarded.
- If the middle element is larger than the target, the right half
  is discarded.

The process continues until the target is found or the search range
becomes empty.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9