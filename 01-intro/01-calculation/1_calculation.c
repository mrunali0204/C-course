#include<stdio.h>
#include "calculation.h"

int main(void)
{
    int no1;
    int no2;
    int ans;

    printf("enter the two number:\n ");          // 12 12
    scanf("%d%d", &no1, &no2);

    ans = addition(no1, no2);
    printf("addition is :%d\n ",ans);              // 24

    substraction(no1, no2);

    printf("multiplication is : %d\n ", multiplication());     //144

    division();

    printf("enter numberator and denominator:\t");          // 12 12
    scanf("%d%d", &no1, &no2);
    ans = modulus(no1, no2);
    printf("remainder is %d\n", ans);                    // 0

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

    printf("enter the two numbers:\n ");    // 12 12
    scanf("%d%d", &no1, &no2);

    return no1 * no2;
}

void substraction(int no1, int no2)
{
    int ans;
    ans = no1 - no2;
    printf("substraction: %d - %d = %d\n", no1, no2, ans);     //substraction: 12 - 12 = 0
}

void division(void)
{
    int numberator;
    int denominator;

    printf("\nEnter numberator:\t ");   // 12
    scanf("%d", &numberator);
    printf("\nEnter denominator:\t ");      //12
    scanf("%d", &denominator);

    printf("Quotient is %d\n ", numberator / denominator);      // 1
}

int addition(int no1, int no2)
{
    return no1 + no2;
}

/*
enter the two number:
 12
12
addition is 24:
 substraction: 12 - 12 = 0
enter the two numbers:
 12
12
multiplication is 144:

Enter numberator:        12

Enter denominator:       12
Quotient is 1
 enter numberator and denominator:      12
12
remainder is 0
*/