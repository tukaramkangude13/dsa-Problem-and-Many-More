#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; //     Choose the last element as the pivot
    int i = low - 1;       //     Index of the smaller element

    //                            Rearrange elements based on pivot
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++; // Move index for smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place pivot at the correct position
    return i + 1; // Return pivot index
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index

        quickSort(arr, low, pi - 1); // Sort elements before pivot
        quickSort(arr, pi + 1, high); // Sort elements after pivot
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements in the array

    printf("Unsorted array:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1); // Sort the array

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
