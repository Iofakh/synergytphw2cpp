#include <stdio.h>


int main()
{
    int a, b;
    printf("Please type 1st nunber: ");
    scanf_s("%i", &a);
    printf("Please type 2nd nunber: ");
    scanf_s("%i", &b);

    if (a > b)
    {
        printf("The 1st number is greater then 2nd number");
    }
    else
    {
        if (a == b)
        {
            printf("The numbers are equal");
        }
        else
        {
            printf("The 1st number is less then 2nd number");
        }
    }
}