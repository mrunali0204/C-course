#include<stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main %d\n", g_iNo);       // asks for Fun

    Fun();

    return 0;
}

int g_iNo = 20;


/*

Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 16.00.30319.01 for 80x86
Copyright (C) Microsoft Corporation.  All rights reserved.

47_internal_linkage_main.c
Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:47_internal_linkage_main.exe
47_internal_linkage_main.obj
47_internal_linkage_main.obj : error LNK2019: unresolved external symbol _Fun referenced in function _main
47_internal_linkage_main.exe : fatal error LNK1120: 1 unresolved externals
*/