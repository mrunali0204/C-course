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
        printf(" 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n 6. Exit\n");
        printf("Enter your choice: \t");
        scanf("%d", &iChoice);

        if(iChoice == 6)
            break;

        if(iChoice <= 0 || iChoice >= 7)
        {
            printf("Wrong Choice");
            continue;
        }

        printf("Enter two numbers: \t");
        scanf("%d%d", &iNo1, &iNo2);

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
        }
        printf("Answer is %d\n", iAns);  
    }
    
    return 0;
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
 6. Exit
Enter your choice:      6


 1. Addition
 2. Substraction
 3. Multiplication
 4. Division
 5. Modulus
 6. Exit
Enter your choice:      3
Enter two numbers:      12
12
Answer is 144

*/