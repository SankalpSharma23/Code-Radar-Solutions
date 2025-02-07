#include <stdio.h>

int main() {
    int a,b,result;
    char x;
    float result1;
    scanf("%d %d %c",&a,&b,&x);
    if(x=='+'){
        result=a+b;
        printf("%d",result);
    }
    else if(x=='-'){
        result=a-b;
        printf("%d",result);
    }
    else if(x=='*'){
        result=a*b;
        printf("%d",result);
    }
    else if(x=='/'){
        result1=a/b;
        printf("%f",result1);
    }
    else{
        printf("error");
    }
    
    return 0;
}