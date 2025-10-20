#include <stdio.h>

int main(void)
{
    double one_third = 1.0 / 3.0;
    double result = 6 * one_third * one_third - 15 * one_third;
    
    printf("%.2f\n", result);
    return 0;
}
