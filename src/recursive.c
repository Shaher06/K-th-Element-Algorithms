#include <stdio.h>

int getMinimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int kthElementRecursive(int arr1[], int n, int arr2[], int m, int k, int start1, int start2)
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
        if (arr1[start1] < arr2[start2])
        {
            return arr1[start1];
        }
        else
        {
            return arr2[start2];
        }
    }

    int half = k / 2;

    int index1 = start1 + half - 1;
    int index2 = start2 + half - 1;

    if (index1 >= n)
    {
        index1 = n - 1;
    }

    if (index2 >= m)
    {
        index2 = m - 1;
    }

    int value1 = arr1[index1];
    int value2 = arr2[index2];

    if (value1 <= value2)
    {
        int removed = index1 - start1 + 1;

        return kthElementRecursive(
            arr1, n,
            arr2, m,
            k - removed,
            index1 + 1,
            start2
        );
    }
    else
    {

        int removed = index2 - start2 + 1;

        return kthElementRecursive(
            arr1, n,
            arr2, m,
            k - removed,
            start1,
            index2 + 1
        );
    }
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;

    if (k < 1 || k > n + m)
    {
        printf("Invalid value of k\n");
        return 0;
    }

    int result = kthElementRecursive(arr1, n, arr2, m, k, 0, 0);

    printf("K-th Element = %d\n", result);

    return 0;
}
