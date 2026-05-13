Algorithm: kthElementNonRecursive(arr1, n, arr2, m, k)

1. If k < 1 OR k > n + m:
      Return -1

2. Set:
      i = 0
      j = 0
      count = 0

3. While i < n AND j < m:

      If arr1[i] <= arr2[j]:
            answer = arr1[i]
            i = i + 1

      Else:
            answer = arr2[j]
            j = j + 1

      count = count + 1

      If count == k:
            Return answer

4. While i < n:

      answer = arr1[i]
      i = i + 1
      count = count + 1

      If count == k:
            Return answer

5. While j < m:

      answer = arr2[j]
      j = j + 1
      count = count + 1

      If count == k:
            Return answer

6. Return -1