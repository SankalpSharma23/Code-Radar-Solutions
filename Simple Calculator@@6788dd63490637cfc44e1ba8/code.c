#include <stdio.h>

int main() {
    int a,b,result;
    char x;

    scanf("%d %d %c",&a,&b,&x);
    if(x=='+'){
        result=a+b;
    }
    else{
        printf("error");
    }
    return 0;
}