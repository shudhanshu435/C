// //Write a C program to check 5th bit of given number is 1 or not. If 5th bit is 1 then multiply that 
// // number by 5 and display the value( eg 32 means in binary 100000 means 5th bit is 1 so multiply this 
// // number by 5 and output is 32*5= 160) and if 5th bit is 0 then multiply that number by 10 (eg. 16 
// // means 010000 means 5th bit is 0 so multiply that number by 10 means 16*10 = 160 will be diplay). 

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    num2=num1>>5;
    if (num2&1)
    {
        printf("The new number is %d",num1*5);
    }
    else
    {
        printf("The new number is %d",num1*10);
    }

    return 0;
}
