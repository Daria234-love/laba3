#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


#define D 2.54
#define L 2.7076

int task1(void);
int task2(void);
int task3(void);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "RUS");

    task1();
    task2();
    task3();

    return 0;
}

int task1(void)
{
    int num1, num2;

    puts("Введите первое число:");
    scanf_s("%d", &num1);

    printf("Введите второе число (сейчас введено %d):\n", num1);
    scanf_s("%d", &num2);

    printf("Сумма = %d\n", num1 + num2);
    printf("Разность = %d\n", num1 - num2);
    printf("Произведение = %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Частное = %d\n", num1 / num2);
        printf("Остаток от деления = %d\n", num1 % num2);
    }
    else
    {
        puts("На ноль делить нельзя.");
    }

    return 0;
}

int task2(void)
{
    int dym;
    int l;
    float result;
    float r;

    puts("\nВведите значение в дюймах:");
    scanf_s("%d", &dym);

    result = dym * D;
    printf("%d дюймов — это %.2f см\n", dym, result);

    puts("\nВведите значение в старолитовских дюймах:");
    scanf_s("%d", &l);

    r = L * l;
    printf("%d старолитовских дюймов — это %.2f см\n", l, r);

    return 0;
}

int task3(void)
{
    float a, b;

    printf("\nВведите число a: ");
    scanf_s("%f", &a);

    printf("Введите число b: ");
    scanf_s("%f", &b);

    puts("____________________________________________");
    printf("|     a * b   |     a + b   |     a - b  |\n");
    printf("| %4.1f * %4.1f | %4.1f + %4.1f | %4.1f - %4.1f |\n",
        a, b, a, b, a, b);
    printf("| %11.1f | %11.1f | %11.1f |\n",
        a * b, a + b, a - b);
    puts("____________________________________________");

    system("pause");
    return 0;
}