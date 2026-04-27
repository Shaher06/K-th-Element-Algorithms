#include <stdio.h>

int kthElementNonRecursive(int arr1[], int n, int arr2[], int m, int k) {
    int i = 0, j = 0;
    int count = 0;
    int answer = -1;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            answer = arr1[i];
            i++;
        } else {
            answer = arr2[j];
            j++;
        }

        count++;

        if (count == k) {
            return answer;
        }
    }

    while (i < n) {
        answer = arr1[i];
        i++;
        count++;

        if (count == k) {
            return answer;
        }
    }

    while (j < m) {
        answer = arr2[j];
        j++;
        count++;

        if (count == k) {
            return answer;
        }
    }

    return -1;
}

int main() {
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};

    int n = 5;
    int m = 4;
    int k = 5;

    int result = kthElementNonRecursive(arr1, n, arr2, m, k);

    printf("K-th Element = %d\n", result);

    return 0;
}
