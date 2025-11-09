#include<stdio.h>

int Addition(iNo1, iNo2);
int Substraction(iNo1, iNo2);
int Multiplication(iNo1, iNo2);
int Division(iNo1, iNo2);
int Modulus(iNo1, iNo2);

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;


    while(1)
    {
        printf(" 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n");
        printf("Enter your choice: \t");
        scanf("%d", &iChoice);

        if(iChoice >= 1 && iChoice <= 5)
        {
            printf("Enter two numbers: \t");
            scanf("%d%d", &iNo1, &iNo2);
        }

        switch(iChoice)
        {
            case 1: 
            iAns = Addition(iNo1, iNo2);
            break;

            case 2: 
            iAns = Substraction(iNo1, iNo2);
            break;

            case 3: 
            iAns = Multiplication(iNo1, iNo2);
            break;

            case 4: 
            iAns = Division(iNo1, iNo2);
            break;

            case 5: 
            iAns = Modulus(iNo1, iNo2);
            break;

            case 6:
            return 0;

            default:
            printf("Wrong choice\n");
            continue;
        }
        printf("Answer is %d\n", iAns);  
    }
    
    //return 0;   unreachable code
}

int Addition(iNo1, iNo2)
{
    return iNo1 + iNo2;
}

int Substraction(iNo1, iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(iNo1, iNo2)
{
    return iNo1 * iNo2;
}

int Division(iNo1, iNo2)
{
    return iNo1 / iNo2;
}

int Modulus(iNo1, iNo2)
{
    return iNo1 % iNo2;
}


/*

 1. Addition
 2. Substraction
 3. Multiplication
 4. Division
 5. Modulus
Enter your choice:      2
Enter two numbers:      12
12
Answer is 0

 1. Addition
 2. Substraction
 3. Multiplication
 4. Division
 5. Modulus
Enter your choice:      9
Wrong choice
*/