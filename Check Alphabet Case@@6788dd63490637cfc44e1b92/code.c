#include <stdio.h>

int main() {
    char x;
    scanf("%d",&x);
    if(isupper(x)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}