#include <stdio.h>

int main() {
    // (a)
    printf("%6d, %4d\n", 86, 1040);

    // (b)
    printf("%12.5e\n", 30.253);

    // (c)
    printf("%.4f\n", 83.162);

    printf("%-6.2g\n", .0000009979);

    return 0;
}
