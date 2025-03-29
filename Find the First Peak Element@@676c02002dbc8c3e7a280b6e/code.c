#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    int X=0;
    for(int i=0;i<n;i++){
        arr[i]<arr[i+1]&&arr[i-1];
        X=1;
        break;
    }
    if(X){
        printf("%d",i);
    }
    return 0;
    }