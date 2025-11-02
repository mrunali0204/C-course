#include<stdio.h>

int main(void)
{
    int iNo;

    iNo = 5;
    if(iNo < 10)
        printf("1 One\n");          //One, Two
        printf("2 Two\n");


    iNo = 15;
    if(iNo < 10)
        printf("3 One\n");         // Two
        printf("4 Two\n");


    iNo = 5;
    if(iNo < 10)
    {
        printf("5 One\n");        //One, Two
        printf("6 Two\n");
    }


    iNo = 15;
    if(iNo < 10)
    {
        printf("7 One\n");        //no output
        printf("8 Two\n");
    }


    iNo = 15;
    if(iNo < 10);
    {
        printf("9 One\n");        //One, Two
        printf("10 Two\n");
    }

    return 0;
}