#include<stdio.h>

void printfNumbers1ToN(iNo);
void printfNumbersNTo1(iNo);

int main(void)
{
    int iNo;

    printf("Enter Number: ");
    scanf("%d", &iNo);                  //5

    printfNumbers1ToN(iNo);
    printfNumbersNTo1(iNo);

    return 0;
}

void printfNumbers1ToN(iNo)
{
    if (iNo == 0)
    return;

    printfNumbers1ToN(iNo - 1);
    printf("%d\n", iNo);                   // 1 2 3 4 5 
}

void printfNumbersNTo1(iNo)
{
    if (iNo == 0)
    return;

    printf("%d\n", iNo);                       // 5 4 3 2 1 
    printfNumbersNTo1(iNo - 1);
}

/*
1
2
3
4
5
5
4
3
2
1
*/