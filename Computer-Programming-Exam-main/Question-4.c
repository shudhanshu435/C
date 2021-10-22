//  Write a C program to find sum of following series: 1^3+2^3+3^3+....+n^3. using function.

#include <stdio.h>
int cubfun(int);
int main()
{
    int num;
    printf("Enter the number of term:");
    scanf("%d",&num);
    printf("Required output is %d",cubfun(num));
    return 0;
}
int cubfun(int a)
{
    int sum=0;
    for (int i = 1; i <= a; i++)
    {
        sum=sum+(i*i*i);
    }
    return sum;
}
