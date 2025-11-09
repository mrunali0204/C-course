#include<stdio.h>
int main(void)
{
    int iNo = 10;
    int iAns;
    printf("%d\n", iNo);          //10

    printf("%d\n", iNo--);        //10
    printf("%d\n", iNo);          //9

    printf("%d\n", --iNo);        //8
    printf("%d\n", iNo);          //8

    iAns = iNo--;
    printf("%d\n", iAns);        //8
    printf("%d\n", iNo);         //7

    iAns = --iNo;
    printf("%d\n", iAns);        //6
    printf("%d\n", iNo);         //6

    return 0;
}

/*
10
10
9
8
8
8
7
6
6
*/