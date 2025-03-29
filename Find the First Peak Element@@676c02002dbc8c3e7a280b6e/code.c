#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    int X=0,c;
    for(int i=0;i<n;i++){
        arr[i]<arr[i+1]&&arr[i-1];
        X=1;
        c=i;
        break;
    }
    if(X){
        printf("%d",arr[c]);
    }
    return 0;
    }