#include<stdio.h>

void Addition(int, int);

int main(void)
{
    int iNo1;
    int iNo2;

    printf("Enter two numbers: \n");
    scanf("%d%d", &iNo1, &iNo2);

    Addition(iNo1, iNo2);

    return 0;
}

void Addition(int iNo1, int iNo2)
{
    int iAns;
    iAns = iNo1 + iNo2;
    printf("Addition of two numbers is :%d", iAns);
}


/*
Enter two numbers:
2
2
Addition of two numbers is :4
*/