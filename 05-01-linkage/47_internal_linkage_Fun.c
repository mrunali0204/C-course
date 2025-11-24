#include<stdio.h>

static int g_iNo = 10;

void Fun(void)
{
    printf("In Fun %d\n", g_iNo);       // asks for main

}

/*

Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 16.00.30319.01 for 80x86
Copyright (C) Microsoft Corporation.  All rights reserved.

47_internal_linkage_Fun.c
Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:47_internal_linkage_Fun.exe
47_internal_linkage_Fun.obj
LIBCMT.lib(crt0.obj) : error LNK2019: unresolved external symbol _main referenced in function ___tmainCRTStartup
47_internal_linkage_Fun.exe : fatal error LNK1120: 1 unresolved externals
*/