#include <stdio.h>

int kthElementNonRecursive(int arr1[], int n, int arr2[], int m, int k)
{
    if (k < 1 || k > n + m)
    {
        return -1;
    }

    int i = 0;
    int j = 0;
    int count = 0;

    while (i < n && j < m)
    {
        int current;

        if (arr1[i] <= arr2[j])
        {
            current = arr1[i];
            i++;
        }
        else
        {
            current = arr2[j];
            j++;
        }

        count++;

        if (count == k)
        {
            return current;
        }
    }

    while (i < n)
    {
        count++;

        if (count == k)
        {
            return arr1[i];
        }

        i++;
    }

    while (j < m)
    {
        count++;

        if (count == k)
        {
            return arr2[j];
        }

        j++;
    }

    return -1;
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int k = 5;

    int result = kthElementNonRecursive(arr1, n, arr2, m, k);

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