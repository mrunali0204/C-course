#include<stdio.h>
int main(void)
{
    printf("%d\n", -1);       //-1
    printf("%u\n", -1);       //4294967295 - highest value of int's unsigned range

    printf("%d\n", 26);       //26
    printf("%u\n", 26);       //26 
    printf("%o\n", 26);       //32

    printf("%x\n", 26);       //1a
    printf("%X\n", 26);       //1A

    printf("%x\n", 18);       //12
    printf("%X\n", 18);       //12

    printf("%d\n", 32);        //32
    printf("%d\n", 032);       //26 - octal
    printf("%d\n", 0x12);      //18 - hexadecimal
    printf("%d\n", 0x1a);      //26
    
    return 0;
}

/*
-1
4294967295
26
26
32
1a
1A
12
12
32
26
18
26
*/