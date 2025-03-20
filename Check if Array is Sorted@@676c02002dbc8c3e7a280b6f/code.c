#include <stdio.h>

// Function to check if the array is sorted in ascending order
int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n;
    
    // Taking input for array size
    scanf("%d", &n);

    int arr[n];
    
    // Taking input for array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is sorted
    if (isSorted(arr, n)) {
        printf("sorted.\n");
    } else {
        printf("Not Sorted.\n");
    }

    return 0;
}
