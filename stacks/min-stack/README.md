# Min Stack

**Difficulty:** Medium

**LeetCode:** https://leetcode.com/problems/min-stack/

## Approach

Two stacks are used to implement the Min Stack.

The first stack stores the actual values. The second stack stores
the minimum value at every position.

Whenever a value is pushed, it is compared with the previous minimum.
If the new value is smaller, it becomes the new minimum. Otherwise,
the previous minimum is stored again.

This allows the minimum element to be retrieved directly from the
top of the minimum stack.

## Time Complexity

- Push: O(1)
- Pop: O(1)
- Top: O(1)
- Get Min: O(1)

## Space Complexity

O(n)

Two stacks are maintained, so the additional space grows with the
number of elements.

## Test Cases

### Test Case 1 - Typical Case

**Operations:**

```text
push(-2)
push(0)
push(-3)
getMin()
pop()
top()
getMin()