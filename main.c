#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("=== C Language Calculator ===\n");

    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Input error.\n");
        return 1;
    }

    int result = add(a, b);
    printf("Add Result: %d\n", result);

    printf("System Check OK.\n");
    return 0;
}
