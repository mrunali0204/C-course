#include<stdio.h>
int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("%d\n", iNo);           //10

    iAns1 = ++iNo;
    printf("%d\n", iAns1);         //11
    printf("%d\n", iNo);           //11

    iAns2 = iNo++;
    printf("%d\n", iAns2);         //11
    printf("%d\n", iNo);           //12

    ++iNo;
    printf("%d\n", iNo);           //13

    iNo++;
    printf("%d\n", iNo);           //14

    printf("%d\n", ++iNo);         //15
    printf("%d\n", iNo);           //15

    printf("%d\n", iNo++);         //15
    printf("%d\n", iNo);           //16

    printf("%d\n", + +iNo);        //16 -> uniary (+ +16) = 16
    printf("%d\n", iNo);           //16

    printf("%d\n", iNo + 1);       //17
    printf("%d\n", iNo);           //16 (not 17) 

    //printf("%d", ++10);    //increment.c(36) : error C2105: '++' needs l-value
    //printf("%d", 10++);    //increment.c(37) : error C2105: '++' needs l-value
 
    return 0;
}


/*
10
11
11
11
12
13
14
15
15
15
16
16
16
17
16
*/