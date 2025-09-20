#include<stdio.h>

int main(void){
    char chChar1 = 'A';
    char chChar2 = 97;

    int iNo1 = 98;
    int iNo2 = 'B';

    char chAns;

    char chChar3 = 33;
    char chChar4 = 35;

    printf("charCh1 (A) in character: %c", chChar1);       //A
    printf("\n charCh1 (A) in integer: %d", chChar1);       //65 - ASCII value

    printf("\n charCh2 (97) in character: %c", chChar2);       //a - ASCII value
    printf("\n charCh2 (97) in integer: %d", chChar2);       //97 

    printf("\n iNo1 (98) in character: %c", iNo1);       //b - ASCII value
    printf("\n iNo1 (98) in integer: %d", iNo1);       //98

    printf("\n iNo2 (B) in character: %c", iNo2);       //B - ASCII value
    printf("\n iNo2 (B) in integer: %d", iNo2);       //66

    printf("\n chChar3 (33) in character: %c",chChar3);       //! - ASCII value
    printf("\n chChar3 (33) in integer: %d", chChar3);       //33

    printf("\n chChar4 (35) in character: %c",chChar4);       //# - ASCII value
    printf("\n chChar4 (35) in integer: %d", chChar4);       //35

    chAns = chChar3 + chChar4;

    printf("\n chAns in character: %c",chAns);   //D
    printf("\n chAns in character: %d",chAns);    //68





}