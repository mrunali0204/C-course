#include<stdio.h>

void Fun(int iNo);

int main(void)
{
    int iNo = 10;

    printf("In main, Before calling:%d\n ", iNo);            //10

    Fun(iNo);

    printf("In main, After calling:%d\n ", iNo);            //10

    return 0;
}

void Fun(int iNo)
{
    printf("In Fun:%d\n ", iNo);            //10

    ++iNo;

    printf("Leaving Fun:%d\n ", iNo);            //11
}

/*
In main, Before calling:10
 In Fun:10
 Leaving Fun:11
 In main, After calling:10
 */