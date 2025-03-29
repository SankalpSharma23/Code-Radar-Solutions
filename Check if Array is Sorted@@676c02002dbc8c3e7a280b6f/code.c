#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=1;j<N;j++){
            if(arr[i]<arr[j]){
                printf("Not Sorted");
            }
            else{
                printf("Sorted");
            }
        }
    }
}