#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);  // Fixed: Removed the extra space in scanf

    b = sizeof(a) * 8;  // Get the number of bits in an int (usually 32)

    // Shifting by 'b' is undefined, so we shift only up to 'b-1'
    c = a << (b - 1);  

    printf("%d\n", c);
    return 0;
}
