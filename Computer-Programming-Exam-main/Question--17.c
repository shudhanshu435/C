// Write a C program to find sum of following series using function:
//  2*1^1+ 3*2^2 + 4*3^3 + 5*4^4….

#include <stdio.h>
#include <math.h>
int func(int);
int main()
{
    int num;
    printf("Enter the number of term:");
    scanf("%d",&num);
    printf("The required sum of series upto %d term is %d",num,func(num));
    return 0;
}
int func(int a)
{
    int sum=0;
    for (int i = 1; i <=a; i++)
    {
        sum=sum+((i+1)*pow(i,i));
    }
    return sum;
}
