// Write a C program to swap two number using function swap() that is available in swap.h header file(you have
// to create this header file) and print the swapped value in main function.

#include <stdio.h>
#include "swap.h"
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    printf("Before swapping , a=%d , b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping , a=%d , b=%d", a, b);
    return 0;
}

//...........................................................................................................
//creating a header file "swap.h"

int swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}
//...........................................................................................................
