#include <stdio.h>

int main() {
    char name[];
    int age ;
    char skill[];
    scanf("%s %d\n",&name,&age);
    scanf("%s",&skill);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",skill);
    return 0;
}