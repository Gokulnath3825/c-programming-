#include <stdio.h>

int main() {
    int a, b;
    int quotient, remainder;
    scanf("%d %d", &a, &b);
    quotient = a / b;
    remainder = a % b;
    printf("Quotient = %d Remainder = %d", quotient, remainder);
    return 0;
}
