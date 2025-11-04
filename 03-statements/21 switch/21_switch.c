#include<stdio.h>

int main(void)
{
    switch(2)
    {
        case 1: 
        printf("1 One\n");                    //2 Two 3 Three
        case 2: 
        printf("2 Two\n");
        case 3: 
        printf("3 Three\n");
    }

    switch(3)
    {
        case 1: 
        printf("4 One\n");
        case 2: 
        printf("5 Two\n");
        case 3: 
        printf("6 Three\n");                //6 Three
    }

    switch(5)
    {
        case 1: 
        printf("7 One\n");
        case 2: 
        printf("8 Two\n");
        case 3: 
        printf("9 Three\n");
        default:
        printf("10 default\n");             //10 default
    }

    switch(5)
    {
        case 1: 
        printf("11 One\n");
        default:
        printf("12 default\n");            //12 default 13 Two 14 Three
        case 2: 
        printf("13 Two\n");
        case 3: 
        printf("14 Three\n");
    }

    switch(5)
    {
        case 1: 
        printf("15 One\n");
        case 2: 
        printf("16 Two\n");
        case 3: 
        printf("17 Three\n");           //no output
    }

    return 0;
}

/*
2 Two
3 Three
6 Three
10 default
12 default
13 Two
14 Three
*/