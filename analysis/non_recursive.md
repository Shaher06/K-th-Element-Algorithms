# Non-Recursive Algorithm Analysis

## Idea
The algorithm uses two pointers, one for each sorted array.

It compares the current elements of both arrays and selects the smaller one, just like the merge step in merge sort.

However, it does not merge the whole arrays. It only counts elements until it reaches the k-th element.

## Steps
1. Start with two pointers:
   - i for arr1
   - j for arr2

2. Compare arr1[i] and arr2[j].

3. Move the pointer of the smaller element.

4. Increase the counter after choosing each element.

5. When the counter becomes equal to k, return the current element.

## Time Complexity
The loop stops when the k-th element is found.

Time Complexity: O(k)

In the worst case, if k = n + m:

Time Complexity: O(n + m)

## Space Complexity
The algorithm only uses a few variables.

Space Complexity: O(1)

## Advantages
- Simple to understand.
- Easy to implement.
- Does not require extra array storage.

## Disadvantages
- If k is large, it may scan many elements.
- Slower than divide and conquer for large inputs.
