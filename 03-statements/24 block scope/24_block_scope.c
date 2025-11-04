#include<stdio.h>

int main(void)
{
    int iNo1 = 10;

    printf("1 %d\n", iNo1);                //10
    //printf("2 %d\n", iNo2);              //24_block_scope.c(8) : error C2065: 'iNo2' : undeclared identifier

    {
        int iNo2 = 20;

        printf("3 %d\n", iNo1);           // 10
        printf("4 %d\n", iNo2);           // 20
    }

    printf("5 %d\n", iNo1);              //10
    //printf("6 %d\n", iNo2);            //24_block_scope.c(18) : error C2065: 'iNo2' : undeclared identifier

    return 0;
}


/*
1 10
3 10
4 20
5 10
*/