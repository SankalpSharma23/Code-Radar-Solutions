#include <stdio.h>

int main() {
    int a,x=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i+j%2);
            
        }
        printf("\n");
    }
    return 0;
}