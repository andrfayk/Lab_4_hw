#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

// Вариант 15. Викторина
// Раунд выигран, если ровно один из двух игроков (A или B) нажал кнопку с четным номером
int main() {
    setlocale(LC_CTYPE, "RUS");
    int A, B;
    int condition;
    printf("=== ТЕЛЕВИКТОРИНА ===\n");
    printf("Введите номера кнопок двух игроков (A B): ");
    scanf("%d %d", &A, &B); // ввод номеров кнопок
    condition = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0); // 1, если четный номер ровно у одного игрока, иначе 0
    printf("Номера кнопок: A = %d, B = %d\n", A, B);
    printf("Победа в раунде (1 - да, 0 - нет): %d\n", condition);
    return 0;
}
