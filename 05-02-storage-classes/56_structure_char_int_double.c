#include<stdio.h>

struct demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    struct demo obj;

    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //w       4745867 0.000000 -> this garbage values

    obj.chChar = 'A';
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //A       4745867 0.000000

    obj.iNo = 10;
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //A       10      0.000000

    obj.dNo = 99.99f;
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //A       10      99.989998

    return 0;
}

/*
w       4745867 0.000000
A       4745867 0.000000
A       10      0.000000
A       10      99.989998
*/