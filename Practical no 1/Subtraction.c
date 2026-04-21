#include <stdio.h>

int main() {
    int a, b, sub;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &b);

    // Subtraction
    sub = a - b;

    // Output result
    printf("Subtraction = %d", sub);

    return 0;
}
