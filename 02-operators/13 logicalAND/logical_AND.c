#include<stdio.h>
int main(void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;

    iAns = iNo1 && ++iNo2 && iNo3++;

    printf("%d %d %d %d", iNo1, iNo2, iNo3, iAns);       //0 1 2 0

    return 0;
}


/*
iAns = iNo1 && ++iNo2 && iNo3++;

binding: doubt why this ( iNo1 && (++iNo2)      AND WHY NOT THIS ((++iNo2) && iNo3++)

iAns = ( iNo1  &&  ++iNo2  &&  iNo3++ );
iAns = ( iNo1 && (++iNo2) && iNo3++ )
iAns = ( ( iNo1 && (++iNo2)) && iNo3++ )
*/