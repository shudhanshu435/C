// Write a C program to calculate a^bc. a,b and c are integer variables using function.

#include <stdio.h>
int func(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c :");
    scanf("%d%d%d",&a,&b,&c);

    printf("Required result is  %d",func(a,b,c));
    return 0;
}
int func(int a,int b,int c)
{
    int sum=1;
    for (int i = 1; i <= b*c; i++ )
    {
        sum=sum*a;
    }
    return sum;

}
