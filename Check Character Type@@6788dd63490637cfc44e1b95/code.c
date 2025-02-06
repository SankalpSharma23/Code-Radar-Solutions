#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    switch(x){
        case 'a': case 'e': case 'i': case'o': case'u': case'A':case 'E': case 'I': case'O': case'U':printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
    return 0;
}