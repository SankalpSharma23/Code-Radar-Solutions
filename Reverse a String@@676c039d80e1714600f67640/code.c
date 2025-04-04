#include<stdio.h>
int main(){
    char arr[100],arr1[100];
    for(int i=0;i<100;i++){
        scanf("%c",arr[i]);
    }
    for(int i =0;i<100;i++){
        arr1[i]=arr[100-i];
    }
    for(int i=0;i<100;i++){
        printf("%c",arr1[i]);
    }
    return 0;
}