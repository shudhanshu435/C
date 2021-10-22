#include <stdio.h>
int main()
{
    int num,a,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int t=num;
    while (num!=0)
    {
        a=num%10;
        sum=sum +(a*a*a);
        num = num/10;


    }
    if (t==sum)
    {
        printf("Entered number is Armstrong number");
    }
    else
    {
        printf("Entered number is not a Armstrong number");
    }
    
    
    return 0;
}
