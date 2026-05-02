#include <stdio.h>
#include <stdlib.h>
void convertBase(long int n, int b) {
    if (n == 0) return;
    convertBase(n / b, b);
    int r = n % b;
    printf("%c", r < 10 ? r + '0' : r - 10 + 'A');
}
int main() {
    char numStr[65];
    int currentBase, targetBase;
    printf("Enter the number: ");
    scanf("%s", numStr);
    printf("Enter its current base: ");
    scanf("%d", &currentBase);
    printf("Enter the target base: ");
    scanf("%d", &targetBase);
    long int decimalNum = strtol(numStr, NULL, currentBase);
    printf("Result in base %d: ", targetBase);
    if (decimalNum == 0) {
        printf("0");
    } else {
        convertBase(decimalNum, targetBase);
    }
    printf("\n");
    return 0;
}