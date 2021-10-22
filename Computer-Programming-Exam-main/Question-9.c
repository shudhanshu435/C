
// Write a C program to swap two number A and B without using third variable. Solve this using call
// by reference.

#include <stdio.h>
void swap(int*,int*);
int main()
{
    int A,B;
    printf("Enter two number:");
    scanf("%d%d",&A,&B);
    printf("Before swapping: num1=%d,num2=%d\n",A,B);
    swap(&A,&B);
    return 0;
}
void swap(int*p,int*q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("After swapping: num1=%d,num2=%d",*p,*q);
}
