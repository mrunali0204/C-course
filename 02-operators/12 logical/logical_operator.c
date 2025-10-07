#include<stdio.h>

int main(void)
{
    printf("1. %d\n", 1 && 0);             //0
    printf("2. %d\n", 0 && 0);             //0
    printf("3. %d\n", 1 && 1);             //1
    printf("4. %d\n", 1 || 1);             //1
    printf("5. %d\n", 1 || 0);             //1
    printf("6. %d\n", 0 || 0);             //0
    printf("7. %d\n", !0);                 //1
    printf("8. %d\n", !1);                 //0

    printf("9. %d\n", 10 && -10);             //1
    printf("10. %d\n", 10 && 20);             //1
    printf("11. %d\n", -10 || 20);             //1
    printf("12. %d\n", -10 || -20);             //1

    printf("13. %d\n", !10);             //0
    printf("14. %d\n", !-10);             //0

    return 0;

}

/*
1. 0
2. 0
3. 1
4. 1
5. 1
6. 0
7. 1
8. 0
9. 1
10. 1
11. 1
12. 1
13. 0
14. 0
*/