#include <stdio.h>
#include <stdlib.h>
int main() {
    char b1[65], b2[65];
    unsigned int a, b, res = 0;
    printf("Enter two binary numbers: ");
    scanf("%64s %64s", b1, b2);
    a = strtol(b1, NULL, 2);
    b = strtol(b2, NULL, 2);
    for (; b > 0; a <<= 1, b >>= 1) {
        if (b & 1) res += a;
    }
    printf("Result Decimal: %u\nResult Binary: ", res);
    if (res == 0) printf("0");
    for (int i = 31; i >= 0; i--) {
        if (res & (1u << i)) { 
            for (; i >= 0; i--) {
                printf("%d", (res >> i) & 1);
            }
            break; 
        }
    }
    printf("\n");
    return 0;
}