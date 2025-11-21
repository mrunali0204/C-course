#include<stdio.h>

int main(void)
{
    extern int iNo;
    extern float iNo;

    printf("%d", iNo);            //10
    printf("%f", iNo);            //runtime error R6002 - floating point support not loaded

    return 0;
}

int iNo = 10;

