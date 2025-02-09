#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int s = 1; s <= a - i; s++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", j); 
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);  
        }

        printf("\n");  
    }

    return 0;
}
