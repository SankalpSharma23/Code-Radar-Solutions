#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("-1\n"); 
        return 0;
    }

    int position = __builtin_clz(n); // Finds the position of the lowest set bit
    printf("%d\n", position);

    return 0;
}
