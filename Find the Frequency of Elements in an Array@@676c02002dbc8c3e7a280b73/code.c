#include <stdio.h>

void frequency(int arr[], int n) {
    if (n < 2) {
        printf("1\n");
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

    // Count and print frequencies
    int current = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == current) {
            count++;
        } else {
            printf("%d occurs %d times\n", current, count);
            current = arr[i];
            count = 1;
        }
    }
    // Print the last element's frequency
    printf("%d occurs %d times\n", current, count);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    frequency(arr, n);
    return 0;
}