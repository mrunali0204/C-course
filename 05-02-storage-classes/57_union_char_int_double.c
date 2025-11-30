#include<stdio.h>

union demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    union demo obj;

    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //@       5780288 0.000000 -> this garbage values

    obj.chChar = 'A';
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //A       5780289 0.000000

    obj.iNo = 10;
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //        10      0.000000   

    obj.dNo = 99.99f;
    printf("%c\t%d\t%lf\n", obj.chChar, obj.iNo, obj.dNo);             //        536870912       99.989998

    return 0;
}

/*
@       5780288 0.000000
A       5780289 0.000000

        10      0.000000
        536870912       99.989998
*/