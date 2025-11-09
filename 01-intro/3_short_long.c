#include<stdio.h>
int main(void)
{
    printf("sizeof(int) = %d\n", sizeof(int));                            //4
    printf("sizeof(short int) = %d\n", sizeof(short int));                //2
    printf("sizeof(long int) = %d\n", sizeof(long int));                  //4
    printf("sizeof(long long int) = %d\n", sizeof(long long int));        //8

    printf("sizeof(char) = %d\n", sizeof(char));                           //1
    // printf("sizeof(short char) = %d\n", sizeof(short char));            // short_long.c(10) : error C2632: 'short' followed by 'char' is illegal
    // printf("sizeof(long char) = %d\n", sizeof(long char));              // short_long.c(11) : error C2632: 'long' followed by 'char' is illegal
    // printf("sizeof(long long char) = %d\n", sizeof(long long char));    // short_long.c(12) : error C2632: '__int64' followed by 'char' is illegal

    printf("sizeof(float) = %d\n", sizeof(float));                         //4
    // printf("sizeof(short float) = %d\n", sizeof(short float));          //short_long.c(15) : error C2632: 'short' followed by 'float' is illegal
    // printf("sizeof(long float) = %d\n", sizeof(long float));            //short_long.c(16) : warning C4215: nonstandard extension used : long float
    // printf("sizeof(long long float) = %d\n", sizeof(long long float));  //short_long.c(17) : error C2632: '__int64' followed by 'float' is illegal

    printf("sizeof(double) = %d\n", sizeof(double));                       //8
    //printf("sizeof(short double) = %d\n", sizeof(short double));         //short_long.c(20) : error C2632: 'short' followed by 'double' is illegal
    printf("sizeof(long double) = %d\n", sizeof(long double));             //8
    //printf("sizeof(long long double) = %d\n", sizeof(long long double));  //short_long.c(22) : error C2632: '__int64' followed by 'double' is illegal

    return 0;
    
}

/*
sizeof(int) = 4
sizeof(short int) = 2
sizeof(long int) = 4
sizeof(long long int) = 8
sizeof(char) = 1
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 8
*/