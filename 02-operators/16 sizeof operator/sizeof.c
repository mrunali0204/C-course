#include<stdio.h>

int main(void)
{
    char chChar = 'A';
    int iNo = 10;
    float fNo = 57.33f; 
    double dNo = 69.33;

    printf("%d\n", sizeof(char));              //1
    printf("%d\n", sizeof(int));               //4
    printf("%d\n", sizeof(float));             //4
    printf("%d\n", sizeof(double));            //8

    printf("%d\n", sizeof(chChar));            //1
    printf("%d\n", sizeof(iNo));               //4
    printf("%d\n", sizeof(fNo));               //4
    printf("%d\n", sizeof(dNo));               //8

    printf("%d\n", sizeof('B'));               //4
    printf("%d\n", sizeof(20));                //4
    printf("%d\n", sizeof(99.99));             //8
    printf("%d\n", sizeof(99.99f));            //4
    
    printf("%d\n", sizeof  'B');               //4
    printf("%d\n", sizeof 20 );                //4
    printf("%d\n", sizeof 99.99 );             //8
    //printf("%d\n", sizeof int );             //sizeof.c(28) : error C2059: syntax error : 'type'

    printf("%d\n", iNo);                      //10
    printf("%d\n", sizeof(++iNo));            //4
    printf("%d\n", iNo);                      //10

    printf("%d\n", sizeof(void));        //0      //sizeof.c(34) : warning C4034: sizeof returns 0

    return 0;
}


/*
1
4
4
8

1
4
4
8

4
4
8
4

4
4
8

10
4
10
0

*/