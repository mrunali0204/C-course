#include<stdio.h>

int g_iNo = 10;

void Fun(void)
{
    printf("In Fun %d\n", g_iNo);       // error - asks for main

}



/*
Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 16.00.30319.01 for 80x86
Copyright (C) Microsoft Corporation.  All rights reserved.

45_external_linkage_Fun.c
45_external_linkage_Fun.c(9) : warning C4098: 'Fun' : 'void' function returning a value
Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:45_external_linkage_Fun.exe
45_external_linkage_Fun.obj
LIBCMT.lib(crt0.obj) : error LNK2019: unresolved external symbol _main referenced in function ___tmainCRTStartup
45_external_linkage_Fun.exe : fatal error LNK1120: 1 unresolved externals
*/