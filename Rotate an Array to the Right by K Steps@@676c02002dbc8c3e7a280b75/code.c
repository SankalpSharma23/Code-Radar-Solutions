#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a],arr1[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
        int b ;
        scanf("%d",&b);
        b=b%a;
        for(int i=0;i<b;i++){
            arr1[i]=arr[a-b+i];
        }
        for(int i=b;i<a;i++){
            arr1[i]=arr[i-b];
        }
        for(int i =0;i<a;i++){
            printf ("%d ",arr1[i]);
    }
    return 0;
}
