#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=1<<b;
    d=a&c;
    return 0;
}