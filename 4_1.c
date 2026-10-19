#include <stdio.h>

#define COEF 1000 /* 1 кДж = 1000 Дж */

int main(void)
{
    long long joules;

    /* Цикл завершается при вводе неположительного числа, EOF или не числа:
       scanf вернет не 1. */
    while (scanf("%lld", &joules) == 1 && joules > 0) {
        /* Целочисленное деление отбрасывает дробную часть: оба операнда
           целые, результат тоже целый, поэтому остаток от деления теряется
           (7 / 2 = 3). Остаток при этом дает операция %. */
        printf("%lld Дж = %lld кДж %lld Дж\n",
               joules, joules / COEF, joules % COEF);
    }
    return 0;
}
