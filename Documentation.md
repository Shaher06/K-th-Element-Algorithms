# K-th Element of Two Sorted Arrays

## 1. Project Idea

The objective of this project is to find the k-th element from two sorted arrays without fully merging them.

Instead of combining both arrays into one, we use efficient algorithms to directly determine the k-th element.

---

## 2. Problem Statement

Given two sorted arrays of size m and n, find the element that would appear at position k in the merged sorted array.

---

## 3. First Algorithm (Non-Recursive)

### Explanation

This algorithm uses a simple iterative approach similar to the merge step in merge sort.

It compares elements from both arrays and moves forward step by step until reaching the k-th element.

### Pseudocode

Refer to: pseudocode/non_recursive.md

### Implementation

Refer to: src/non_recursive.c

### Time Complexity

O(k)

Worst case:
O(n + m)

### Space Complexity

O(1)

---

## 4. Second Algorithm (Recursive)

### Explanation

This algorithm uses a divide and conquer approach.

Instead of checking one element at a time, it eliminates about half of the remaining elements in each recursive step.

### Pseudocode

Refer to: pseudocode/recursive.md

### Implementation

Refer to: src/recursive.c

### Time Complexity

O(log k)

Worst case:
O(log(n + m))

### Space Complexity

O(log k)

---

## 5. Comparison

Refer to: analysis/comparison.md

---

## 6. Test Cases

Refer to: test_cases/test_cases.md

---

## 7. Conclusion

The non-recursive algorithm is simple and easy to implement but slower for large inputs.

The recursive algorithm is more efficient and faster, but more complex.

---

## 8. Team Members

- Name 1 - ID
- Name 2 - ID
- Name 3 - ID
- Name 4 - ID
- Name 5 - ID
