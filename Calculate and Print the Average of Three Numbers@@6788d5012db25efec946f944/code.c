#include <stdio.h>
int main() {
    int a,b,c;
    float sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=(float)(a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}