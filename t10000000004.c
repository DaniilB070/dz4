#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    int condition;
    printf("=== ЗАДАНИЕ 4. ДОСТАВКА ГРУЗОВ ===\n");
    printf("Три груза (A, B, C кг) можно погрузить в контейнер,\n");
    printf("если вес каждого из них кратен пяти.\n");
    printf("Условие: (A %% 5 == 0) && (B %% 5 == 0) && (C %% 5 == 0)\n\n");
    printf("Введите вес трёх грузов (A B C): ");
    scanf("%d %d %d", &A, &B, &C);
    condition = (A % 5 == 0) && (B % 5 == 0) && (C % 5 == 0);
    printf("Разрешение на погрузку (1 - да, 0 - нет): %d\n", condition);

    return 0;
}