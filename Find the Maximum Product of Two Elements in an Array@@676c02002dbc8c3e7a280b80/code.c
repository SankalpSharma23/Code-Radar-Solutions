#include <stdio.h>
#include <limits.h> // For INT_MIN

void findTwoMax(int arr[], int n) {
    if (n < 2) {
        printf("Array has less than 2 elements.\n");
        return;
    }

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }
    int result = firstMax*secondMax;
    printf("%d",result);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findTwoMax(arr, n);
    return 0;
}