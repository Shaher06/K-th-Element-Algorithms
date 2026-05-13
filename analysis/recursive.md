# Recursive Algorithm Analysis

## Idea

The recursive algorithm uses a divide and conquer approach.

Instead of checking elements one by one, it removes a group of elements from one of the arrays during each recursive call.

Because both arrays are sorted, the algorithm compares candidate elements and safely discards the smaller portion that cannot contain the k-th element.

## Steps

1. If one array is completely used, return the k-th remaining element from the other array.

2. If k equals 1, return the smaller first remaining element.

3. Divide k by 2.

4. Compare the candidate elements from both arrays.

5. Remove the smaller group of elements.

6. Reduce k by the number of removed elements.

7. Repeat recursively until the k-th element is found.

## Time Complexity

Each recursive call removes about half of the remaining elements.

Recurrence Relation:

T(k) = T(k/2) + C

Therefore:

Time Complexity:
O(log k)

Worst Case Time Complexity:
O(log k)

## Space Complexity

The algorithm uses recursive function calls.

Space Complexity:
O(log k)

This is because recursive calls are stored in the call stack.

## Advantages

- Faster than the non-recursive approach for large inputs.
- Does not merge the arrays.
- Efficiently uses the sorted property of the arrays.
- Reduces the search space quickly.

## Disadvantages

- Harder to understand and implement.
- Uses extra stack memory because of recursion.