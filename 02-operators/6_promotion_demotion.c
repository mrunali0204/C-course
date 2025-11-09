# include <stdio.h>
int main(void)
{
    int iAns;
    iAns = 2 * 3.25 + (9/2);   
    printf("%d", iAns);             //10

    return 0;
}


/*
stepwise way of promotion and demotion:

          iAns = ( 2 * 3.25 + (9/2) );  

step1:    iAns = ( (2.00 * 3.25) + (9/2) )      2 -> 2.00     promotion of 2 to 2.00
step2:    iAns = ( (6.50) + (9/2) )  

step3:    iAns = ( 6.50 + 4 )                   
step4:    iAns = ( 6.50 + 4.00 )               4 -> 4.00     promotion of 4 to 4.00

step5:    iAns = 10.50                          10.50 -> 10     demotion of 10.50 to 10
step6:    iAns = 10                         10.50 -> 10     demotion of 10.50 to 10
*/