#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    int isSorted = 1;  // Assume sorted initially
    
    // Check if array is in non-decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // If current element > next element
            isSorted = 0;           // Mark as not sorted
            break;                  // No need to check further
        }
    }

    // Print result as per requirements
    if (isSorted) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
  