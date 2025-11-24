#include<stdio.h>

void Fun(void);

int main(void)
{
    static int g_iNo;

    printf("In main %d\n", g_iNo);       // asks for Fun

    Fun();

    return 0;
}


/*

49_internal_linkage_error_solution_main.c
Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:49_internal_linkage_error_solution_main.exe
49_internal_linkage_error_solution_main.obj
49_internal_linkage_error_solution_main.obj : error LNK2019: unresolved external symbol _Fun referenced in function _main
49_internal_linkage_error_solution_main.exe : fatal error LNK1120: 1 unresolved externals
*/