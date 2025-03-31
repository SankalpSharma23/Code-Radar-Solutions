#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    printf("%d ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int most_frequent = arr[0];  // Assume the first number is the most frequent
    int max_count = 1;           // It appears at least once

    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;  // Count how many times arr[i] appears
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent = arr[i];
        }
    }

    printf("%d ", max_count);
    return 0;
}