#include<stdio.h>

void Fun(void);

int iNo = 10;

int main(void)
{
    int No = 20;

    printf("%d\n", iNo);           //10
    
    {
        char iNo = 'A';
        printf("%d\n", iNo);           //65
    }

    printf("%d\n", iNo);           //10

    Fun();

    return 0;
}

void Fun(void)
{
    printf("%d\n", iNo);           //10
}

/*
10
65
10
10
*/