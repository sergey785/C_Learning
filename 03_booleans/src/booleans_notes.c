#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b, x, y;
    
    // Ввод значений
    printf("Введите значения для a, b, x, y: ");
    scanf("%d %d %d %d", &a, &b, &x, &y);

    // Пример использования логических операторов
    bool result1 = (a > b && x < y); // Логическое И
    bool result2 = (a == b || x != y); // Логическое ИЛИ
    bool result3 = !(a < b); // Логическое НЕ

    // Вывод результатов
    printf("a > b && x < y = %d\n", result1);
    printf("a == b || x != y = %d\n", result2);
    printf("!(a < b) = %d\n", result3);

    return 0;
}
