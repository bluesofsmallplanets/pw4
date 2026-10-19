#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    unsigned long long a = 0, b = 1, next;

    if (scanf("%d", &n) != 1 || n < 1 || n > 93) {
        printf("N must be in range 1..93\n");
        return 1;
    }

    while (i++ < n) {
        if (i > 1)
            putchar(' ');
        printf("%llu", a);
        next = a + b;
        a = b;
        b = next;
    }
    putchar('\n');
    return 0;
}
