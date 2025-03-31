

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    // Initialize first and second using the first two distinct elements
    int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Traverse from the third element onward
    for (int i = 2; i < N; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("%d\n", second);  
    return 0;
}