#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the size of the array
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
    int first, second;
    if(arr[0]>arr[1]){
        first=arr[0];
        second=arr[1];
    }
    for (int 2 = 0; i < N; i++) {
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