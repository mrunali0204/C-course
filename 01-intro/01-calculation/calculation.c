#include<stdio.h>
#include "calculation.h"

int main(void)
{
    int no1;
    int no2;
    int ans;

    printf("enter the two number\n: ");
    scanf("%d%d", &no1, &no2);

    ans = addition(no1, no2);
    printf("addition is %d\n: ",ans);

    substraction(no1, no2);

    printf("multiplication is %d\n: ", multiplication());

    division();

    printf("enter numberator and denominator:\t");
    scanf("%d%d", &no1, &no2);
    ans = modulus(no1, no2);
    printf("remainder is %d\n", ans);

    return 0;

}

int modulus(int num, int den)
{
    int remainder;
    remainder = num % den;
    return remainder;
}

int multiplication(void)
{
    int no1;
    int no2;

    printf("enter the two numbers\n: ");
    scanf("%d%d", &no1, &no2);

    return no1 * no2;
}

void substraction(int no1, int no2)
{
    int ans;
    ans = no1 - no2;
    printf("substraction: %d - %d = %d\n", no1, no2, ans);
}

void division(void)
{
    int numberator;
    int denominator;

    printf("\nEnter numberator:\t ");
    scanf("%d", &numberator);
    printf("\nEnter denominator:\t ");
    scanf("%d", &denominator);

    printf("Quotient is %d\n: ", numberator / denominator);
}

int addition(int no1, int no2)
{
    return no1 + no2;
}