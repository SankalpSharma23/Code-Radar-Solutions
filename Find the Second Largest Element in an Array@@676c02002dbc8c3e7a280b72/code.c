#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the size of the array
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
    int first = -1, second = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("%d\n", second);  // Output the second largest element
    return 0;
}