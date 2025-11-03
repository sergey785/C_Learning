#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    bool even = digit % 5 == 0;
    printf("%d\n", even * 100);

    return 0;
}
