#include <stdio.h>

// Function declaration (consistent with definition)
int find(int *arr, int N, int target);

// Function definition (fixed parameter types)
int find(int arr[], int N, int target) {
    for (int i = 0; i < N; i++) {  // Fixed: i < N (not <=)
        if (arr[i] == target) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int N, target;
    scanf("%d", &N);  // Read array size

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    scanf("%d", &target);  // Fixed: Added & before target

    int result = find(arr, N, target);  // Call search function

    if (result != -1) {
        printf("%d\n", result);  // Fixed: Added \n
    } else {
        printf("-1\n");  // Fixed: Added \n
    }

    return 0;
}