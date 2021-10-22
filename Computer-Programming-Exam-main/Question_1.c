// Write a C program to add all even digits of given number N.(eg. If input number is 21456 then it 
// will display 2+4+6 means 12) using function

#include <stdio.h>
int main()
{
    int num,t,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0)
    {
        t=num%10;
        if (t%2==0)
        {
            sum=sum+t;
        }
        num=num/10;
    }
    printf("Required sum is %d",sum);
    return 0;
}
