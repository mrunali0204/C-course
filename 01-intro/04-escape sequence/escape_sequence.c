#include<stdio.h>
int main(void)
{
    printf("Hello\n");            //Hello
    //printf("Hello\n" ");        //escape_sequence.c(5) : error C2001: newline in constant
    printf("\"Hello\"\n");        //"Hello"

    printf(" 'Hello'\n");         // 'Hello'
    printf("\'Hello\'\n");        //

    printf("Hello?\n");           //
    printf("Hello\?\n");          //
    
    printf("\temp\bin\new\n");     
    /*
            emin
ew
*/

    printf("\\temp\\bin\\new\n");      //\temp\bin\new

    printf("Hello\a");


}

/*
Hello
"Hello"
 'Hello'
'Hello'
Hello?
Hello?
        emin
ew
\temp\bin\new
Hello
*/