# K-th Element of Two Sorted Arrays

## Project Description

This project solves the problem of finding the k-th smallest element from two sorted arrays without fully merging them.

Two different approaches are implemented:

1. Non-Recursive Algorithm (Iterative)
2. Recursive Algorithm (Divide and Conquer)

The project also includes:
- Pseudocode
- Complexity Analysis
- Comparison between algorithms
- Test Cases

---

# Problem Statement

Given two sorted arrays of sizes n and m, find the element that would appear at position k in the merged sorted array.

---

# Input

- Two sorted arrays
- Integer k

---

# Output

- The k-th smallest element in the merged sorted order

---

# Example

## Input

arr1 = {2, 3, 6, 7, 9}

arr2 = {1, 4, 8, 10}

k = 5

## Merged Sorted Order

{1, 2, 3, 4, 6, 7, 8, 9, 10}

## Output

6

---

# Algorithms Used

## 1. Non-Recursive Algorithm

### Idea

Uses an iterative merge-like approach similar to Merge Sort.

The algorithm compares elements step by step until the k-th element is reached.

### Time Complexity

O(k)

Worst Case:
O(n + m)

### Space Complexity

O(1)

---

## 2. Recursive Algorithm

### Idea

Uses a divide and conquer approach.

The algorithm removes about half of the remaining elements during each recursive call.

### Time Complexity

O(log k)

### Space Complexity

O(log k)

---

# Project Structure

```text
analysis/
pseudocode/
src/
test_cases/
Documentation.md
README.md
