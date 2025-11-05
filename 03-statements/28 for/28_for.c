#include<stdio.h>

int main(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    //version 1
    for(iCounter = 0; iCounter < 3; iCounter++)
        printf("1 %d\n", iCounter);                //0 1 2

    //version 2
    iCounter = 0;
    for(; iCounter < 3; iCounter++)
        printf("2 %d\n", iCounter);                //0 1 2

    //version 3
    for(iCounter = 0; ; iCounter++)
    {
        if(iCounter == 3)
        break;
        printf("3 %d\n", iCounter);                //0 1 2
    }

    //version 4
    for(iCounter = 0; iCounter < 3; )
    {
        printf("4 %d\n", iCounter);                //0 1 2
        iCounter++;
    }

    //version 5
    iCounter = 0;
    for( ; ; )
    {
        if(iCounter == 3)
        break;
        printf("5 %d\n", iCounter);                //0 1 2
        iCounter++;
    }

    //version 6
    iCounter = 0;
    for( ; iCounter < 3; )
    {
        printf("6 %d\n", iCounter);                //0 1 2
        iCounter++;
    }

    //version 7
    for(iCounter1 = 0, iCounter2 = 3  ; iCounter1 < 3, iCounter2 > 0  ; iCounter1++ , iCounter2--)
        printf("%d\t%d\n", iCounter1, iCounter2);
                           //0 1 2    //3 2 1

    //version 8
    for(iCounter = 3; iCounter < 3; iCounter++)
        printf("8 %d\n", iCounter);                   //no output

    return 0;
}


/*
1 0
1 1
1 2

2 0
2 1
2 2

3 0
3 1
3 2

4 0
4 1
4 2

5 0
5 1
5 2

6 0
6 1
6 2

0       3
1       2
2       1
*/