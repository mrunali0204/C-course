#include<stdio.h>

int Addition(int, int);

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("Enter two numbers: \n");
    scanf("%d%d", &iNo1, &iNo2);

    Addition(iNo1, iNo2);
    printf("Addition of two numbers is :%d", Ans);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    int Ans = iNo1 + iNo2;
    return Ans;
}


/*
Enter two numbers:
2
2
Addition of two numbers is :4
*/