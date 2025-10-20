#include <stdio.h>

int main(void)
{
    int a1, a50;
    scanf("%d%*[^0-9-]%d", &a1, &a50);
    // %d — читает число
    // %*[^0-9-] — пропускает любые символы, пока не встретит следующее число

    int result = ((a1 + a50) * 50) / 2;
    printf("%d", result);
    return 0;
}
