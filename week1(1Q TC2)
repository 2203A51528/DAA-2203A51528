#include <stdio.h>

// Function to sort array in ascending order
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to sort array in descending order
void sortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of destinations: ");
    scanf("%d", &n);
    
    int times[n];
    
    printf("Enter time to reach destination:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }
    
    printf("Output in ascending order:\n");
    sortAscending(times, n);
    for (int i = 0; i < n; i++) {
        printf("%10d\n", times[i]);
    }
    
    printf("Output in descending order:\n");
    sortDescending(times, n);
    for (int i = 0; i < n; i++) {
        printf("%10d\n", times[i]);
    }
    
    return 0;
}


