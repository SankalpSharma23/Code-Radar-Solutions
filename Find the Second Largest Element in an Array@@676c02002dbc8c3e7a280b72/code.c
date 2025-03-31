#include<stdio.h>
int mian(){
    int N;
    scanf("%d",&N);
    int arr[];
    for(int i=0;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    int first=-1,second=-1;
    for(int i=0;i<=N;i++){
        if(arr[i]>first){
            second=first;
            second=arr[i];
        }
        else if(arr[i]> second && arr[i] != first){
            second=arr[i];
        }
    }
    printf("%d",second);
    return 0;
}