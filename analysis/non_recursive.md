# Non-Recursive Algorithm Analysis

## Idea

The algorithm uses two pointers, one for each sorted array.

It compares the current elements of both arrays and selects the smaller element, similar to the merge step in Merge Sort.

However, instead of merging the entire arrays, the algorithm only continues until the k-th element is reached.

## Steps

1. Initialize two pointers:
   - i for arr1
   - j for arr2

2. Compare arr1[i] and arr2[j].

3. Select the smaller element and move its pointer.

4. Increase the counter after selecting each element.

5. When the counter becomes equal to k, return the current element.

## Time Complexity

The algorithm stops as soon as the k-th element is found.

General Case:
O(k)

Worst Case:
If k = n + m, the algorithm may scan all elements.

Worst Case Time Complexity:
O(n + m)

## Space Complexity

The algorithm uses only a few extra variables.

Space Complexity:
O(1)

## Advantages

- Simple and easy to understand.
- Easy to implement.
- Does not require extra array storage.
- Efficient for small values of k.

## Disadvantages

- May scan many elements when k is large.
- Slower than the recursive divide and conquer approach for large inputs.