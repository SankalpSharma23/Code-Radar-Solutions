#include<stdio.h>

int main(){
int size,target;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",target);
int result =finder(arr,size,target);
if(result!=-1){
    printf("%d",result);
}
else{
    printf("-1")
}
return 0;
}
int finder(int arr[],size,target){
    for(int i=0;i<=size;i++){
        if(arr[i]==target){
            return i;
        }
       
    }
     return -1;
}