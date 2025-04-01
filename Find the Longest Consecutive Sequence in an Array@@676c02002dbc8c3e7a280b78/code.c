
#include <stdio.h>
int cons(int arr[],int N){
    if(N==0)
    return 0;
    for(int i=0;i<N;i++){
        if(arr[i]==arr[i+1]);{
            printf("1");
        }
    }
    int current =1, max =1;
    for(int i =1;i<N;i++){
        if(arr[i]!=arr[i+1]){
            if(arr[i]==arr[i]+1){
                current++;
            }
            else{
                if(max>current){
                    max=current;
                }
               
                current=1;
            }
        }
    }
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr);
    }
int result =cons(arr,N);
printf("%d",result);
    return 0;
}