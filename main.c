#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

// Вариант 10. Фабрика игрушек
// Партия принимается, если вес каждой из трех игрушек (A, B, C грамм) кратен семи
int main() {
    setlocale(LC_CTYPE, "RUS");
    int A, B, C;
    int condition;
    printf("=== КОНТРОЛЬ КАЧЕСТВА ФАБРИКИ ИГРУШЕК ===\n");
    printf("Введите вес трех игрушек в граммах (A B C): ");
    scanf("%d %d %d", &A, &B, &C); // ввод веса трех игрушек
    condition = (A % 7 == 0) && (B % 7 == 0) && (C % 7 == 0); // 1, если каждый вес делится на 7 без остатка, иначе 0
    printf("Вес игрушек: A = %d г, B = %d г, C = %d г\n", A, B, C);
    printf("Партия принята (1 - да, 0 - нет): %d\n", condition);
    return 0;
}
