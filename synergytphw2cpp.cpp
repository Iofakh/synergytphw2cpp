#include <stdio.h>


int main()
{
    int a, b;
    printf("Введите первое число: ");
    scanf_s("%i", &a);
    printf("введите второе число: ");
    scanf_s("%i", &b);

    if (a > b)
    {
        printf("Больше");
    }
    else
    {
        if (a == b)
        {
            printf("Равны");
        }
        else
        {
            printf("Меньше");
        }
    }
}