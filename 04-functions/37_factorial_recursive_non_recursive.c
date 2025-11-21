#include<stdio.h>

int FactRecursive(int iNo);
int FactNonRecursive(int iNo);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter a number:\n", iNo);           //3
    scanf("%d", &iNo);

    iAns = FactRecursive(iNo);
    printf("Answer is %d\n", iAns);           //6

    iAns = FactNonRecursive(iNo);
    printf("Answer is %d\n", iAns);           //6

    return 0;
}

int FactRecursive(int iNo)
{
    if (iNo == 1)
    return 1;

    return iNo * FactRecursive(iNo - 1);
}

int FactNonRecursive(int iNo)
{
    int iCounter;
    int iAns = iNo;

    for(iCounter = iNo - 1; iCounter != 1; iCounter--)
    {
        iAns = iAns * iCounter;
    }

    return iAns;
}




/*
Enter a number:
3
Answer is 6
Answer is 6
*/