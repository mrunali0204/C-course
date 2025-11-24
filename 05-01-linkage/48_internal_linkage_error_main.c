#include<stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main %d\n", g_iNo);       // asks for Fun

    Fun();

    return 0;
}

static int g_iNo = 20;

/*

Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:48_internal_linkage_error_main.exe
48_internal_linkage_error_main.obj
48_internal_linkage_error_main.obj : error LNK2019: unresolved external symbol _Fun referenced in function _main
48_internal_linkage_error_main.obj : error LNK2019: unresolved external symbol _g_iNo referenced in function _main
48_internal_linkage_error_main.exe : fatal error LNK1120: 2 unresolved externals
*/
