#include<stdio.h>

int main(void)
{
    int No = 10;
    float  No = 71.5f;

    printf("%d\n", iNo);           //error
    
    return 0;
}

/*

43_definition_different_datatype_same_scope.c(6) : warning C4142: benign redefinition of type
43_definition_different_datatype_same_scope.c(6) : error C2374: 'No' : redefinition; multiple initialization
        43_definition_different_datatype_same_scope.c(5) : see declaration of 'No'
43_definition_different_datatype_same_scope.c(8) : error C2065: 'iNo' : undeclared identifier
*/