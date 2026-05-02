#include <stdio.h>
#include <stdlib.h>

void pb(unsigned int n) {
    int i = 31;
    if (!n) { putchar('0'); return; }
    while (!(n & (1u << i))) i--;
    for (; i >= 0; i--) putchar('0' + ((n >> i) & 1));
}

int main() {
    char q[65], m[65];
    unsigned int Q, M, A = 0;
    int n = 32;

    printf("Enter Dividend and Divisor in binary: ");
    scanf("%64s %64s", q, m);

    Q = strtoul(q, NULL, 2);
    M = strtoul(m, NULL, 2);

    while (n--) {
        if ((int)A < 0) {
            A = (A << 1) | (Q >> 31);
            Q <<= 1;
            A += M;
        } else {
            A = (A << 1) | (Q >> 31);
            Q <<= 1;
            A -= M;
        }
        if ((int)A < 0) Q &= ~1;
        else Q |= 1;
    }
    
    if ((int)A < 0) A += M;

    printf("Quotient: ");
    pb(Q);
    printf("\nRemainder: ");
    pb(A);
    printf("\n");

    return 0;
}