#include <stdio.h>
#include <string.h>

int main() {
    char bin[65];
    printf("Enter The Binary Number : ");
    scanf("%s", bin);
    int n = strlen(bin), i;
    for (i = 0; i < n; i++) bin[i] = bin[i] == '0' ? '1' : '0';
    for (i = n - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            bin[i] = '0';
        } else {
            bin[i] = '1';
            break;
        }
    }
    printf("2's Complement : %s\n", bin);
    return 0;
}