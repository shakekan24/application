#include <stdio.h>

int main() {
    int a, b, result;

    printf("=== C Language Calculator ===\n");

    // 減法邏輯 (Subtraction Feature)
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = a - b;

    printf("Subtraction Result: %d - %d = %d\n", a, b, result);

    printf("System Check OK.\n");
    return 0;
}
