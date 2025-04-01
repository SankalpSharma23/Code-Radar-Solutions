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
            printf("%d %d",current_element,current_count);
            current_element = arr[i];
            current_count = 1;
        }
    }
    printf("%d %d", max_element,max_count);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largestFrequency(arr, n);
    return 0;
}