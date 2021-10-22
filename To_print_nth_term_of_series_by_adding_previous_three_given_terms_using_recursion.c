#include<stdio.h>
int rec(int,int,int,int);
int main()
{
    int n,a,b,c;
    printf("Enter the term you want to print and Enter the value of first three terms:");
    scanf("%d%d%d%d",&n,&a,&b,&c);
    printf("%d",rec(n,a,b,c));
    return 0;
}
int rec(int n,int a,int b,int c)
{
    if (n==1) return a;
    if (n==2) return b;
    if (n==3) return c;
    else
    return (rec(n-1,a,b,c)+rec(n-2,a,b,c)+rec(n-3,a,b,c));
}
