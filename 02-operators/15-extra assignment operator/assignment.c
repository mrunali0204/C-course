#include<stdio.h>

int main(void)
{
    int iNo = 10;                    // R -> L assignment   

    //iNo1 = iNo2 = iNo3 = 10;  // R -> L associativity      -> here if L -> R associativity then iNo3 would have binded to iNo2 so 10 value would be useless and no assignment would occur

    iNo += 10; 
    iNo = iNo + 10;

    iNo -= 10; 
    iNo = iNo - 10;

    iNo &= 10; 
    iNo = iNo & 10;

    iNo *= 10; 
    iNo = iNo * 10;

    return 0;

}