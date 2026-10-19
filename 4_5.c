#include <stdio.h>

double bit_to_byte(double bit)
{
    const double BITS_IN_BYTE = 8.0;
    return bit / BITS_IN_BYTE;
}

int main(void)
{
    double value;

    while (scanf("%lf", &value) == 1)
        printf("%.2f\n", bit_to_byte(value));

    return 0;
}
