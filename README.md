# Interview Preparation

This repository tracks interview problems in a compact format so it is easy to scale to 191 problems.

## Problem Format

For each problem, only these details are maintained:
- Folder structure for that problem
- Approach followed
- Time complexity
- Space complexity

---

## Problem 1: Reverse Linked List

### Folder Structure

```text
Linked List/
`-- reverseLinkedList.cpp
```

### Approach Followed
- Iterative pointer reversal (`prev`, `curr`, `forward`)

### Time Complexity
- `O(n)`

### Space Complexity
- `O(1)`

---

## Problem 2: Middle of Linked List

### Folder Structure

```text
Linked List/
`-- middleOfLinkedList.cpp
```

### Approach Followed
- Two-pointer technique (`slow` and `fast`)
- Move `slow` by 1 step and `fast` by 2 steps
- When `fast` reaches the end, `slow` is at the middle

### Time Complexity
- `O(n)`

### Space Complexity
- `O(1)`

---

## Template For Next Problems

```md
## Problem <number>: <problem name>

### Folder Structure
<folder and file path>

### Approach Followed
<short approach summary>

### Time Complexity
<Big-O>

### Space Complexity
<Big-O>
```