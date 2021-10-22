// Write a program in C to given number N is palindrome or not and if number is palindrome then only check
// number is even or odd.

#include <stdio.h>
int main()
{
    int num,t,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int temp=num;
    while (num>0)
    {
        t=num%10;
        sum=(sum*10)+t;
        num/=10;
    }
    if (sum==temp)
    {
        printf("Number is palindrome & ");
        if (t%2==0) printf("Number is even");
        else printf("Number is odd");

    }
    else printf("Number is not a palindrome");

    return 0;
}
