#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
     for (int i = a; i >= 1; i--) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}