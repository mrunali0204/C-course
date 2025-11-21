#include<stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main %d\n", g_iNo);       // 2 errors - 1. g_iNo 2. Fun()

    Fun();

    return 0;
}

int g_iNo = 20;
