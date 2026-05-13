
# K-th Element of Two Sorted Arrays

## Project Idea

Given two sorted arrays of sizes m and n, the goal is to find the element that would be at the k-th position if the two arrays were merged into one sorted array.

## Example

Array 1 = {2, 3, 6, 7, 9}  
Array 2 = {1, 4, 8, 10}  
k = 5  

Final sorted array:

{1, 2, 3, 4, 6, 7, 8, 9, 10}

The 5th element is:

6

## Language Used

C Programming Language

## Algorithms Used

1. Non-recursive algorithm
2. Recursive algorithm

## Project Structure

```text
K-th-Element-Algorithms/
│
├── README.md
├── Documentation.md
│
├── src/
│   ├── non_recursive.c
│   └── recursive.c
│
├── pseudocode/
│   ├── non_recursive.md
│   └── recursive.md
│
├── analysis/
│   ├── non_recursive.md
│   ├── recursive.md
│   └── comparison.md
│
└── test_cases/
    └── test_cases.md