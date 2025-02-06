#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    if(isdigit(x)){
        printf("Digit");
    }

    else if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("Consonant");
    }
    else (x==@){
        printf("Special");
    }
    return 0;
}