#include <stdio.h>

void merge(int a[], int beg, int mid, int end) {
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int leftArray[n1], rightArray[n2];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (i = 0; i < n1; i++)
        leftArray[i] = a[beg + i];
    for (j = 0; j < n2; j++)
        rightArray[j] = a[mid + 1 + j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = beg; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            a[k] = leftArray[i];
            i++;
        } else {
            a[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArray[], if any
    while (i < n1) {
        a[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArray[], if any
    while (j < n2) {
        a[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;

        // Sort first and second halves
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);

        // Merge the sorted halves
        merge(a, beg, mid, end);
    }
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[] = {12, 31, 25, 32, 17, 40, 42};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting array elements:\n");
    printArray(a, n);

    mergeSort(a, 0, n - 1);

    printf("After sorting array elements:\n");
    printArray(a, n);

    return 0;
}

