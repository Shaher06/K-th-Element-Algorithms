# Non-Recursive Algorithm Pseudocode

Algorithm: KthElementNonRecursive(arr1, n, arr2, m, k)

1. Set i = 0, j = 0, count = 0
2. While i < n and j < m:
   - If arr1[i] < arr2[j]:
       answer = arr1[i]
       i = i + 1
   - Else:
       answer = arr2[j]
       j = j + 1
   - count = count + 1
   - If count == k:
       Return answer

3. While i < n:
   - answer = arr1[i]
   - i = i + 1
   - count = count + 1
   - If count == k:
       Return answer

4. While j < m:
   - answer = arr2[j]
   - j = j + 1
   - count = count + 1
   - If count == k:
       Return answer

5. Return -1
