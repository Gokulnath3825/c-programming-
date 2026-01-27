#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d ", &a);
    scanf("%c ", &op);
    scanf("%d ", &b);

    switch(op) {
        case '+':
        printf("Result = %d", a+b);
        break;
        case '-':
        printf("Result = %d", a-b);
        break;
        case '*':
        printf("Result = %d", a*b);
        break;
        case '/':
        printf("Result = %d", a/b);
        break;
        case '%':
        printf("Result = %d", a%b);
        break;
        default:
        printf("Invalid operator");
    }
    return 0;
}
