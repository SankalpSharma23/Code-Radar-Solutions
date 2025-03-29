#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted= 0;
    for(int i=0;i<n;i++){
            if(arr[i]<arr[i+1]){
                Sorted=1;
                break;
            }
        }
        if(sorted){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
          return 0;
    }
  
