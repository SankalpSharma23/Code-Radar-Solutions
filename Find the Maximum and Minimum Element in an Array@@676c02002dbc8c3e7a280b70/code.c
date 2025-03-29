#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
        for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int mix=arr[0];
    for(int i=0;i<n;i++){
        if(mix>arr[i]){
            mix=arr[i];
        }
        
    }
    printf("%d ",mix);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    printf("%d",max);
    return 0;
}