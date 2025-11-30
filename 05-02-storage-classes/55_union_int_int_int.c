#include<stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo obj;

    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //1       1       1  -> this garbage values

    obj.iNo1 = 10;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //10      10      10

    obj.iNo2 = 20;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //20      20      20

    obj.iNo3 = 30;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);            //30      30      30

    return 0;
}

/*
1       1       1
10      10      10
20      20      20
30      30      30
*/