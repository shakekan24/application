#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main(void)
{
    printf("=== C Language Calculator ===\n");

    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Input Error.\n");
        return 1;
    }

    printf("Add Result: %d\n", add(a, b));
    printf("Sub Result: %d\n", sub(a, b));
    printf("System Check OK.\n");

    return 0;
}
