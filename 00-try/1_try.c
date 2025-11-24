/*
print this patter if user input = 5

1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

call Fun again and again
*/

#include<stdio.h>

void Fun(int iNo, int iAns);
void Fun1(int iNo, int iAns);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter any number: \n");                              //5
    scanf("%d", &iNo);

    Fun1(iNo, iAns);

    return 0;
}

void Fun(int iNo, int iAns)
{
    int iCounter;

    for(iCounter = 1; iCounter <= iNo; iCounter++)
        printf("%d\t", iCounter);                                 //1       2       3       4       5
    
    printf("\n");

    for(iCounter = iNo + 1; iCounter <= iNo + (iNo-2); iCounter++)
    {
        printf("\t\t\t\t");
        printf("%d\n", iCounter);                                 //                     6 \n 7 \n 8
    }

    for(iCounter = iNo + iNo+ (iNo-2); iCounter >= iNo + iNo-1; iCounter--)
    {
        printf("%d\t", iCounter);                                //13      12      11      10      9 
    }

    // for(iCounter = 16; iCounter >= 14; iCounter--)
    // {
    //     printf("%d\n", iCounter);                            // 16 \n 17 \n 18
    // }


}

void Fun1(int iNo, int iAns)
{
    int iCounter1;
    int iCounter2;

    for(iCounter1 = 1; iCounter1 <= iNo; iCounter1++)
    {
        printf("%d\t", iCounter1); 
        for(iCounter2 = 1; iCounter2 <= iCounter1; iCounter2++)
        {
            //printf("%d\t", iCounter1); 
        }
        printf("\n");
    }

}



/*   my output: 

Enter any number:
5
1       2       3       4       5
                                6
                                7
                                8
13      12      11      10      9       16
15
14
*/