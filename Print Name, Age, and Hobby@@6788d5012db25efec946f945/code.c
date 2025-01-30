#include <stdio.h>

int main() {
    char name[100];
    int age ;
    char skill[100];
    scanf("%s %d\n",&name,&age);
    scanf("%s",&skill);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",skill);
    return 0;
}