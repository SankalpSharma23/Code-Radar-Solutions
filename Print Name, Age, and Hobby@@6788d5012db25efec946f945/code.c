#include <stdio.h>

int main() {
    char name[100];
    int age ;
    char skill[100];
    scanf("%s %d\n",name,age);
    scanf("%s",skill);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",skill);
    return 0;
}