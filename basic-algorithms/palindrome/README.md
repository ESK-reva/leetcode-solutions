# Palindrome Number

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/palindrome-number/

## Approach

The number is reversed digit by digit and then compared with the
original number.

The last digit is obtained using the modulo operator `% 10`.
The number is then divided by 10 to remove its last digit.

If the reversed number is equal to the original number, the number
is a palindrome.

Negative numbers are not considered palindromes.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
x = 121