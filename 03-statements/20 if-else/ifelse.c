#include<stdio.h>

int main(void)
{
    int iNo;

    //1
    iNo = 5;
    if(iNo < 10)
        printf("1 One\n");          //One
    else
        printf("2 Two\n");


    //2
    iNo = 15;
    if(iNo < 10)
        printf("3 One\n");                 // Two
    else
        printf("4 Two\n");

/*
    //3
    iNo = 5;
    if(iNo < 10)
        printf("5 One\n");                //error
        printf("6 Two\n");
    else                                //ifelse.c(28) : error C2181: illegal else without matching if
        printf("7 Three\n");
*/

    //4
    iNo = 15;
    if(iNo < 10)
    {
        printf("8 One\n");                //Three
        printf("9 Two\n");
    }
    else
        printf("10 Three\n");

/*
    //5
    iNo = 15;
    if(iNo < 10);
    {
        printf("11 One\n");               //ERROR
        printf("12 Two\n");
    }
    else                                 //ifelse.c(50) : error C2181: illegal else without matching if
        printf("13 Three\n");
*/

    return 0;
}



/*
1 One
4 Two
10 Three
*/