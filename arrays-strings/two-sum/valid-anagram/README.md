# Valid Anagram

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

The solution uses a frequency-counting approach.

An array of 26 integers is used to store the frequency of each
lowercase English letter.

For every character in the first string, its count is increased.
For every character in the second string, its count is decreased.

If the two strings are anagrams, all frequency values will become
zero.

The lengths of the strings are also checked first. If their lengths
are different, they cannot be anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

The frequency array always contains 26 elements, so the additional
space is constant.

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
s = "anagram"
t = "nagaram"