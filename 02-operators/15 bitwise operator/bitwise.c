#include<stdio.h>
int main(void)
{
    printf("%d\n",28 & 38);              //4
    printf("%d\n",28 | 38);              //62
    printf("%d\n",28 ^ 38);              //58
    printf("%d\n",~38);                  //-39

    printf("%d\n",8 << 1);               //16
    printf("%d\n",8 >> 1);               //4

    printf("%d\n",20 << 2);               //80
    printf("%d\n",20 >> 2);               //5

}

/*
4
62
58
-39
16
4
80
5
*/