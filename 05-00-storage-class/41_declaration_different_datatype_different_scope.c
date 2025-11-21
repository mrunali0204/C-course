#include<stdio.h>

extern int iNo;

int main(void)
{
    extern float iNo;              //not allowed

    printf("%d", iNo);            //10
    printf("%f", iNo);            //runtime error R6002    - floating point support not loaded

    return 0;
}

int iNo = 10;

