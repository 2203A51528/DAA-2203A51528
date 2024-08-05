#include <stdio.h>

// Function to sort array in ascending order using insertion sort
void insertionSortAscending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to sort array in descending order using insertion sort
void insertionSortDescending(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are less than key, to one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    printf("Enter the number of hotels: ");
    scanf("%d", &n);

    int prices[n];

    printf("Enter Hotel Price:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Output in ascending order:\n");
    insertionSortAscending(prices, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", prices[i]);
    }

    printf("Output in descending order:\n");
    insertionSortDescending(prices, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", prices[i]);
    }

    return 0;
}
