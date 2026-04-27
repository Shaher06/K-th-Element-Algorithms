# Recursive Algorithm Analysis

## Idea
The recursive algorithm uses a divide and conquer approach.

Instead of checking elements one by one, it removes a group of elements from one of the arrays in each recursive call.

Because both arrays are sorted, we can compare the middle candidate elements and safely discard the smaller part that cannot contain the k-th element.

## Steps
1. If one array is finished, return the k-th element from the other array.

2. If k equals 1, return the smaller first remaining element.

3. Divide k by 2.

4. Compare the k/2-th remaining element from both arrays.

5. Remove the smaller group of elements.

6. Reduce k by the number of removed elements.

7. Repeat recursively until the answer is found.

## Time Complexity
Each recursive call removes about k/2 elements.

Time Complexity: O(log k)

In the worst case, since k can be up to n + m:

Time Complexity: O(log(n + m))

## Space Complexity
The algorithm uses recursive function calls.

Space Complexity: O(log k)

This is because each recursive call is stored in the call stack.

## Advantages
- Faster than the non-recursive approach for large arrays.
- Does not merge the arrays.
- Uses the sorted property efficiently.

## Disadvantages
- Harder to understand than the non-recursive approach.
- Uses extra stack memory because of recursion.
