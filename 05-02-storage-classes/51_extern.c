#include<stdio.h>

int g_iNo1;
int g_iNo2 = 10;
//extern int g_iNo3;
extern int g_iNo4 = 20;

int main(void)
{
    int iNo1;
    int iNo2 = 10;
    //extern int iNo3;
    //extern int iNo4 = 20;         //51_extern.c(13) : error C2205: 'iNo4' : cannot initialize extern variables with block scope

    printf("%d\n", g_iNo1);          //0
    printf("%d\n", g_iNo2);          //10
    //printf("%d\n", g_iNo3);        //51_extern.obj : error LNK2019: unresolved external symbol _g_iNo3 referenced in function _main
    printf("%d\n", g_iNo4);          //20

    printf("%d\n", iNo1);          //15017864
    printf("%d\n", iNo2);          //10
    //printf("%d\n", iNo3);         //51_extern.obj : error LNK2019: unresolved external symbol _iNo3 referenced in function _main
    //printf("%d\n", iNo4);

    return 0;
}


/*
0
10
20
15017864
10*/
