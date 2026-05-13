Algorithm: kthElementRecursive(arr1, n, arr2, m, k, start1, start2)

1. If start1 == n:
      Return arr2[start2 + k - 1]

2. If start2 == m:
      Return arr1[start1 + k - 1]

3. If k == 1:

      If arr1[start1] < arr2[start2]:
            Return arr1[start1]

      Else:
            Return arr2[start2]

4. Set:
      half = k / 2

5. Set:
      index1 = start1 + half - 1

6. Set:
      index2 = start2 + half - 1

7. If index1 >= n:
      index1 = n - 1

8. If index2 >= m:
      index2 = m - 1

9. Set:
      value1 = arr1[index1]

10. Set:
       value2 = arr2[index2]

11. If value1 <= value2:

       removed = index1 - start1 + 1

       Return kthElementRecursive(
              arr1,
              n,
              arr2,
              m,
              k - removed,
              index1 + 1,
              start2
       )

12. Else:

       removed = index2 - start2 + 1

       Return kthElementRecursive(
              arr1,
              n,
              arr2,
              m,
              k - removed,
              start1,
              index2 + 1
       )