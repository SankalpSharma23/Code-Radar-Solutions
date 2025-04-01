
#include <stdio.h>

void product(int arr[], int n) {
    if (n < 2) {
        printf("1\n");
        return;
    }

    int max1 = arr[0], max2 = arr[1];
    int min1 = arr[0], min2 = arr[1];

    // Initialize max1 and max2 correctly
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    // Initialize min1 and min2 correctly
    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if (product1 > product2) {
        printf("%d\n", product1);
    } else {
        printf("%d\n", product2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    product(arr, n);
    return 0;
}