#include<stdio.h>

int main(void)
{
    int iNo1;
    auto int iNo2;

    printf("%d\t%d", iNo1, iNo2);          //4138808 4141749   -> garbage, garbage

    return 0;
}