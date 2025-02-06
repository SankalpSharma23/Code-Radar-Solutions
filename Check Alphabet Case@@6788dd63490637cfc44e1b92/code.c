#include <stdio.h>
#include <ctype.h>
int main() {
    char x;
    scanf("%c",&x);
    if(isupper(x)){
        printf("Uppercase");
    }
    else if(islower(x)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}