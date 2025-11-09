#include<stdio.h>

int main(void)
{
    int iCounter;

    //version 1
    iCounter = 0;
    while(iCounter < 3)
    {
        printf("1 %d\n", iCounter);           // 0 1 2
        iCounter++;
    }

    //version 2
    iCounter = 0;
    while(iCounter < 3)
    {
        printf("2 %d\n", iCounter++);         // 0 1 2
    }

        //version 1
    iCounter = 3;
    while(iCounter < 3)
    {
        printf("3 %d\n", iCounter);        //no output
        iCounter++;
    }

    return 0;

}

/*
1 0
1 1
1 2
2 0
2 1
2 2
*/
