#include<stdio.h>

static int g_iNo = 10;

void Fun(void)
{
    printf("In Fun %d\n", g_iNo);       // asks for main

}

/*

Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:48_internal_linkage_error_Fun.exe
48_internal_linkage_error_Fun.obj
LIBCMT.lib(crt0.obj) : error LNK2019: unresolved external symbol _main referenced in function ___tmainCRTStartup
48_internal_linkage_error_Fun.exe : fatal error LNK1120: 1 unresolved externals
*/