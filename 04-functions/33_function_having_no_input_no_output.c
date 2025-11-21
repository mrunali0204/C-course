#include<stdio.h>

void Addition(void);

int main(void)
{
    Addition();

    return 0;
}

void Addition(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("Enter two numbers: \n");
    scanf("%d%d", &iNo1, &iNo2);

    iAns = iNo1 + iNo2;
    printf("Addition of two numbers is :%d", iAns);
}


/*
Enter two numbers:
33
23
Addition of two numbers is :56
*/