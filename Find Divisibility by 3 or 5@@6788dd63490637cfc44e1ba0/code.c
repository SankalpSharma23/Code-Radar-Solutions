#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%3){
        printf("Divisible by 3");
    }
    else if(a%5){
        printf("Divisible by 5");
    }
    else if(a%5&&a%3){
        printf("Divisible by both");
    }
    return 0;
}