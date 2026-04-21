#include <stdio.h>

int main() {
    int a, b, mul;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &a);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &b);

    // Multiplication
    mul = a * b;

    // Output result
    printf("Multiplication = %d", mul);

    return 0;
}
