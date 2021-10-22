// Write a C program to calculate factorial of number N using your own header file like factorial.h and in header
// file fact function will calculate factorial and return the value to main function and print.

#include <stdio.h>
#include "factorial.h"    //creating a header file named factorial.h
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    printf("The factorial of the number is %d",fact(num));    //fact. func. is defined in factorial.h file
    return 0;
}

//......................Create a new file in the same folder named "factorial.h" and write the below code there....................
int fact(int a)
{
    int fact=1;
    for (int i = 1; i <=a; i++)
    {
        fact =fact*i;
    }
    return fact;
    
}
//.................................................................................................................................
