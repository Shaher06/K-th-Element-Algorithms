#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}
int kthElementRecursiveHelper(int arr1[], int n, int arr2[], int m, int k, int start1, int start2)
{
    if (start1 == n)
    {
        return arr2[start2 + k - 1];
    }

    if (start2 == m)
    {
        return arr1[start1 + k - 1];
    }

    if (k == 1)
    {
        return (arr1[start1] < arr2[start2]) ? arr1[start1] : arr2[start2];
    }

    int half = k / 2;

    int newIndex1 = min(start1 + half, n) - 1;
    int newIndex2 = min(start2 + half, m) - 1;

    int pivot1 = arr1[newIndex1];
    int pivot2 = arr2[newIndex2];

    if (pivot1 <= pivot2)
    {
        int removed = newIndex1 - start1 + 1;
        return kthElementRecursiveHelper(arr1, n, arr2, m, k - removed, newIndex1 + 1, start2);
    }
    else
    {
        int removed = newIndex2 - start2 + 1;
        return kthElementRecursiveHelper(arr1, n, arr2, m, k - removed, start1, newIndex2 + 1);
    }
}

int kthElementRecursive(int arr1[], int n, int arr2[], int m, int k)
{
    if (k < 1 || k > n + m)
    {
        return -1;
    }

    return kthElementRecursiveHelper(arr1, n, arr2, m, k, 0, 0);
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;

    int result = kthElementRecursive(arr1, n, arr2, m, k);

    if (result == -1)
    {
        printf("Invalid value of k\n");
    }
    else
    {
        printf("K-th Element = %d\n", result);
    }

    return 0;
}
