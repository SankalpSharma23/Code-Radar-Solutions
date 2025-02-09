#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i =1 ; i<=a;i++){
        for(int space=1;space<=a-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}