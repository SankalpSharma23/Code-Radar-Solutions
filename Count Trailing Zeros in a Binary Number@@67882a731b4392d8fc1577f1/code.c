#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);
    
    int trailingZeros = __builtin_ctz(n); // Count trailing zeros
    printf("%d\n", trailingZeros);

    return 0;
}
