#include<stdio.h>
int main(void)
{
    printf("1Hello\n");            //1Hello
    //printf("2Hello\n" ");        //escape_sequence.c(5) : error C2001: newline in constant
    printf("\"3Hello\"\n");        //"3Hello"

    printf("'4Hello'\n");          //'4Hello'
    printf("\'5Hello\'\n");        //'5Hello'

    printf("6Hello?\n");           //6Hello?
    printf("7Hello\?\n");          //7Hello?
    printf("8?");                  //8?
    
    printf("\temp\bin\new\n");     
    /*
            emin
ew
*/

    printf("\\temp\\bin\\new\n");      //\temp\bin\new

    printf("10 Hello\a");               //10 Hello

    printf("11 Hello\b");               //11 Hell - here o is not printed 

    printf("12 Hello\f");               //12 Hello

    printf("13 Hello\n");               //13 Hello

    printf("14 Hello\r");               //

    printf("15 Hello\t");               //15 Hello         .

    printf("16 Hello\v");               //16 Hello

    printf("17 Hello\0");               //17 Hello

    return 0;

}

/*
1Hello
"3Hello"
'4Hello'
'5Hello'
6Hello?
7Hello?
8?      emin
ew
\temp\bin\new
10 Hello11 Hell12 Hello
                       13 Hello
15 Hello        16 Hello
                        17 Hello
*/