#include<stdio.h>

int main(void)
{
    char chChar;
    printf("Enter characters: \n"); 
    scanf("%c", &chChar); 

    switch(chChar)
    {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        printf("It is small letter vowel\n");                   
        break;

        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
        printf("It is capital letter vowel\n");                   
        break;

        default:
        printf("It is not vowel\n"); 
    }
        return 0;
}

/*
Enter characters:
a
It is small letter vowel

Enter characters:
A
It is capital letter vowel

*/