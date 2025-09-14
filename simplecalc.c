#include <stdio.h>
int main() {
    char op;
    int a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+': printf("Sum = %d\n", a+b); break;
        case '-': printf("Difference = %d\n", a-b); break;
        case '*': printf("Product = %d\n", a*b); break;
        case '/': printf("Quotient = %d\n", a/b); break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
