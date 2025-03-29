#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int peakFound = 0;  // Flag to check if any peak exists
    int peakIndex = -1; // Stores the index of a peak

    for(int i = 0; i < n; i++) {
        int isPeak = 1;  // Assume current element is a peak
        
        // Check left neighbor (skip if i=0)
        if (i > 0 && arr[i] <= arr[i-1]) {
            isPeak = 0;
        }
        
        // Check right neighbor (skip if i=n-1)
        if (i < n-1 && arr[i] <= arr[i+1]) {
            isPeak = 0;
        }

        if (isPeak) {
            peakFound = 1;
            peakIndex = i;
            break;  // Remove this to find all peaks
        }
    }

    if (peakFound) {
        printf("%d\n", arr[peakIndex]);
    } else {
        printf("-1");
    }

    return 0;
}