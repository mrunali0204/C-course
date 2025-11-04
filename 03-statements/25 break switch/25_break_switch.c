#include<stdio.h>

int main(void)
{
    switch(2)
    {
        case 1: 
        printf("1 One\n");                    
        case 2: 
        printf("2 Two\n");                             //2 Two
        break;
        case 3: 
        printf("3 Three\n");
    }

    return 0;
}