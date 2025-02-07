#include <stdio.h>

int main() {
    int a,b,result;
    char x;

    scanf("%d %d %c",&a,&b,&x);

    if(x=='+'){
        result=a+b;
    }
    else if(x=='-'){
        result=a-b;
    }
    else if(x=='*'){
        result=a*b;
    }
    else {
        result=a/b;
    }
    printf("%d",result);
    return 0;
}