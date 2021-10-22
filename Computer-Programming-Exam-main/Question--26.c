// Write a C program to make the calculator for input a and b.
// Given input a and b if you will choose option 1 means input 1 then it will add a and b and if you will choose
// option 2 then it will subtract a and b and if you will choose option 3 then it will multiply a and b and if you
// will choose option 4 then it will divide a and b using switch..case statement.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b;
    int n;
    system("CLS");
    printf("Enter the value of a and b :");
    scanf("%f%f", &a, &b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%f", a + b);
        break;
    case 2:
        printf("%f", a - b);
        break;
    case 3:
        printf("%f", a * b);
        break;
    case 4:
        printf("%f", a / b);
        break;

    default:
        break;
    }

    return 0;
}
