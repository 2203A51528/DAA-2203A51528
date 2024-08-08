#include <stdio.h>

// Function to perform binary search on a sorted salary array
int binarySearchSalary(int arr[], int size, int target_salary) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target_salary matches the salary at mid
        if (arr[mid] == target_salary) {
            return mid;
        }
        // If target_salary is greater, ignore the left half
        else if (arr[mid] < target_salary) {
            left = mid + 1;
        }
        // If target_salary is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target salary is not present in the array
    return -1;
}

int main() {
    // Sorted array of employee salaries
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int size = sizeof(salaries) / sizeof(salaries[0]);
    int target_salary = 4000;

    // Perform the binary search for the target salary
    int result = binarySearchSalary(salaries, size, target_salary);

    if (result != -1) {
        printf("Arun's salary %d is found at index %d.\n", target_salary, result);
    } else {
        printf("Salary %d not found.\n", target_salary);
    }

    return 0;
}
