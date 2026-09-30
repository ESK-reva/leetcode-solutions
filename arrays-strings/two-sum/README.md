# Two Sum

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/two-sum/

## Approach

The solution uses a brute-force approach. Each element is
compared with every element that comes after it.

For every pair of elements, their sum is checked against the
given target. When the sum equals the target, their indices
are returned.

## Time Complexity

O(n²)

## Space Complexity

O(1) auxiliary space.

## Test Cases

### Test Case 1 - Typical Case

**Input:**
```text
nums = [2, 7, 11, 15]
target = 9