#include<stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    struct demo obj;

    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //9909307 9762952 9906366

    obj.iNo1 = 10;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //10      9762952 9906366

    obj.iNo2 = 20;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);             //10      20      9906366

    obj.iNo3 = 30;
    printf("%d\t%d\t%d\n", obj.iNo1, obj.iNo2, obj.iNo3);            //10      20      30

    return 0;
}

/*
9909307 9762952 9906366
10      9762952 9906366
10      20      9906366
10      20      30
*/