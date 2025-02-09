#include <stdio.h>

int main() {
    int a,sum;
    scanf("%d",&a);
    for(int i=1,i<=10,i++){
        sum=2*i;
        printf("2 X %d = %d\n",i,sum);
    }
    return 0;
}