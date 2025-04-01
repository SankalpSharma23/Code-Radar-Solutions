#include <stdio.h>

// Recursive function to check if the array is a palindrome
int isPalindrome(int arr[], int start, int end) {
    // Base case: if start >= end, the array is a palindrome
    if (start >= end) {
        return 1;
    }
    // If elements at start and end do not match, it's not a palindrome
    if (arr[start] != arr[end]) {
        return 0;
    }
    // Recursively check the subarray from start+1 to end-1
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isPalindrome(arr, 0, n - 1)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
