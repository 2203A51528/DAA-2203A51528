#include <stdio.h>

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    // Sort the array using Selection Sort
    selectionSort(arr, size);

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
