//A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself.

#include <stdio.h>
void isKrishnamurthy(int N) 
{
    // code here
    int fact=1,sum=0;
    int m=N;
    while(N>0)
    {
        int t=N%10;
        N/=10;
        fact=1;
        for (int i = 1; i <= t; i++)         //145 
        {
            fact=fact*i;
        }
        sum+=fact;
    }
    if(sum==m) printf("Krishnamurthy number");
    else printf("Not a Krishnamurthy number");
    }

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    isKrishnamurthy(num);
    return 0;
}
