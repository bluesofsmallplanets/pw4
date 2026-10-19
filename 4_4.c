#include <stdio.h>

int main(void)
{
    int n, i = 0;
    double a1, an, d = 0, term, s = 0;

    if (scanf("%d %lf %lf", &n, &a1, &an) != 3 || n < 1)
        return 1;
    if (n > 1)
        d = (an - a1) / (n - 1);

    term = a1;
    while (i++ < n) {
        s += term;
        term += d;
    }

    printf("S = %.6f\n", s);
    return 0;
}
