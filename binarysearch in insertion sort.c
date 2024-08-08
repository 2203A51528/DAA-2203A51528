#include <stdio.h>

// Function to perform Insertion Sort on an array
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Binary Search on a sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int arr[] = {5000, 2000, 10000, 7000, 8000, 6000, 9000, 4000};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4000;

    // Sort the array using Insertion Sort
    insertionSort(arr, size);

    // Perform Binary Search for the target value
    int result = binarySearch(arr, size, target);

    // Output the results
    if (result != -1) {
        printf("The target salary %d is found at index %d in the sorted array.\n", target, result);
    } else {
        printf("The target salary %d is not found in the array.\n", target);
    }

    return 0;
}
