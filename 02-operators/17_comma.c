#include<stdio.h>

int Fun(void);

int main(void)
{
    int iAns1, iAns2, iAns3;
    iAns1 = 10, 20, 30;
    iAns2 = (10, 20, 30);

    printf("%d %d\n", iAns1 , iAns2);       // 10 30 

    iAns3 = Fun();

    printf("%d", iAns3);           //0

    return 0;
}

int Fun(void)
{
    return -1, 1, 0;
}

/*
10 30
0
*/