# Interview Preparation

This repository contains C++ practice solutions for common coding interview questions.

## Current Structure

```text
Interview-Preparation/
|-- Linked List/
|   `-- reverseLinkedList.cpp
`-- README.md
```

## Implemented Problem

### Reverse a Singly Linked List

File: `Linked List/reverseLinkedList.cpp`

The file includes:
- A `ListNode` structure for singly linked list nodes.
- An **iterative** linked list reversal approach.
- A **recursive** linked list reversal approach.

## Approach Summary

### 1) Iterative Approach
- Uses three pointers: `prev`, `curr`, and `forward`.
- Reverses pointers one by one while traversing the list.

Time complexity: `O(n)`  
Space complexity: `O(1)`

### 2) Recursive Approach
- Recursively reverses the sub-list from `head->next` onward.
- Rewires pointers while backtracking.

Time complexity: `O(n)`  
Space complexity: `O(n)` (recursion stack)

## How to Compile and Run

From the project root, run:

```bash
g++ "Linked List/reverseLinkedList.cpp" -std=c++17 -o reverseLinkedList
./reverseLinkedList
```

On Windows PowerShell:

```powershell
g++ "Linked List/reverseLinkedList.cpp" -std=c++17 -o reverseLinkedList.exe
.\reverseLinkedList.exe
```

## Notes

- This repository is intended for interview practice and concept revision.
- More data structure and algorithm problems can be added in separate folders over time.