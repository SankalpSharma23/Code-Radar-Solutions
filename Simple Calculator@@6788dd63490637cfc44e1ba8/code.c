#include <stdio.h>

int main() {
    int a,b,result;
    char x;

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
        if(b!=0){
            result=a/b;
        printf("%d",result);
        }
        else{
            printf("error");
        }
        
    }
    else{
        printf("error");
    }
    
    return 0;
}