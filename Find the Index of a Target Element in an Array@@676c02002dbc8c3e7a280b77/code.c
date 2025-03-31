#include<stdio.h>

int main(){
int N,target;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",target);
int result =find(arr,N,target);
if(result!=-1){
    printf("%d",result);
}
else{
    printf("-1");
}
return 0;
}
int find(int arr[],N,target){
    for(int i=0;i<=N;i++){
        if(arr[i]==target){
            return i;
        }
       
    }
     return -1;
}