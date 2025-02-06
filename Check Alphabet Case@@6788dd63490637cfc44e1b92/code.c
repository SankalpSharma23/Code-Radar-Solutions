#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    if(isupper(x)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}