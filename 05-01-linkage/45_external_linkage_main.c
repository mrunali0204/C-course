#include<stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main %d\n", g_iNo);       // 2 errors - 1. g_iNo 2. Fun()

    Fun();

    return 0;
}

/*

45_external_linkage_main.obj
45_external_linkage_main.obj : error LNK2019: unresolved external symbol _Fun referenced in function _main
45_external_linkage_main.obj : error LNK2019: unresolved external symbol _g_iNo referenced in function _main
45_external_linkage_main.exe : fatal error LNK1120: 2 unresolved externals

*/