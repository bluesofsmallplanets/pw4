#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t w, h;

    if (scanf("%hu %hu", &w, &h) != 2)
        return 1;

    float result = (float)w * h / 10000;

    printf("Result: %.4f\n", result);
    printf("sizeof(uint16_t): %llu\n", (unsigned long long)sizeof(w));
    printf("sizeof(float): %llu\n", (unsigned long long)sizeof(result));
    return 0;
}
