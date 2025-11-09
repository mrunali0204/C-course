#include<stdio.h>

int main(void)
{
    int iCounter;

    //version 1
    iCounter = 0;
    do
    {
        printf("1 %d\n", iCounter);           // 0 1 2
        iCounter++;
    }while(iCounter < 3);

    //version 2
    iCounter = 3;
    do
    {
        printf("2 %d\n", iCounter);        //3
        iCounter++;
    }while(iCounter < 3);

    return 0;

}

/*
1 0
1 1
1 2

2 3
*/
