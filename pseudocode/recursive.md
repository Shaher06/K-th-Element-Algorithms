# Recursive Algorithm Pseudocode

Algorithm: KthElementRecursive(arr1, n, arr2, m, k, start1, start2)

1. If start1 == n:
   - Return arr2[start2 + k - 1]

2. If start2 == m:
   - Return arr1[start1 + k - 1]

3. If k == 1:
   - Return the smaller value between arr1[start1] and arr2[start2]

4. Set half = k / 2

5. Set newIndex1 = minimum(start1 + half, n) - 1
6. Set newIndex2 = minimum(start2 + half, m) - 1

7. Set pivot1 = arr1[newIndex1]
8. Set pivot2 = arr2[newIndex2]

9. If pivot1 <= pivot2:
   - removed = newIndex1 - start1 + 1
   - Recursively search in arr1 after newIndex1
   - Return KthElementRecursive(arr1, n, arr2, m, k - removed, newIndex1 + 1, start2)

10. Else:
   - removed = newIndex2 - start2 + 1
   - Recursively search in arr2 after newIndex2
   - Return KthElementRecursive(arr1, n, arr2, m, k - removed, start1, newIndex2 + 1)
