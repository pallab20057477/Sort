#include<stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, j, key;
    
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Driver function
int main() {
    int n, i, arr[20];

    // Input: number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: elements of the array
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using Insertion Sort
    insertionSort(arr, n);

    // Output: sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}

