#include<stdio.h>

extern int iNo;

int main(void)
{
    int No = 10;
    int No = 20;

    printf("%d", iNo);           //error
    
    return 0;
}

/*

42_definition_same_datatype_same_scope.c(8) : error C2374: 'No' : redefinition; multiple initialization
        42_definition_same_datatype_same_scope.c(7) : see declaration of 'No'
*/
