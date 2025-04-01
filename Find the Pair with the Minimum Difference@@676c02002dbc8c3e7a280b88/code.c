
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void finder(int arr[], int n) {
    // Check if the array has less than 2 elements
    if (n < 2){
        printf("-1");
    };
    
    // Bubble sort to sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Initialize min with a large value
    int min = INT_MAX;
    int num1 = arr[0], num2 = arr[1]; // Initialize with first two elements

    // Find the pair with the smallest difference
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < min) {
            min = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    // Print the result
    printf("%d %d\n", num1, num2);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    finder(arr, n);
    return 0;
}
