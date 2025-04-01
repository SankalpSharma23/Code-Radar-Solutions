#include <stdio.h>

void largestFrequency(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }

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

    int max_element = arr[0];
    int max_count = 1;
    int current_element = arr[0];
    int current_count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == current_element) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
                max_element = current_element;
            }
            current_element = arr[i];
            current_count = 1;
        }
    }

    // Check the last element's count
    if (current_count > max_count) {
        max_count = current_count;
        max_element = current_element;
    }

    printf("Element with largest frequency: %d (occurs %d times)\n", max_element, max_count);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largestFrequency(arr, n);
    return 0;
}