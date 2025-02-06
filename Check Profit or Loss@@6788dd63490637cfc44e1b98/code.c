#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b>0){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}