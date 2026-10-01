# Valid Parentheses

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach

A stack is used to keep track of opening brackets.

Whenever an opening bracket is encountered, it is pushed onto the
stack. When a closing bracket is encountered, the top element of the
stack is removed and checked to make sure it is the corresponding
opening bracket.

If a closing bracket does not match the top of the stack, the string
is invalid.

At the end, the stack must be empty for the string to be valid.

## Time Complexity

O(n)

## Space Complexity

O(n)

In the worst case, all opening brackets can be stored in the stack.

## Test Cases

### Test Case 1 - Typical Case

**Input:**

```text
s = "()[]{}"