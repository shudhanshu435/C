// Write a C program to check given number N is prime and number is between 100 to 200.

#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    ;
    if (num > 100 && num < 200)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("No. is prime");
        }
        else
            printf("No. is not prime");
    }
    else
    printf("No. is not in between 100 and 200");

    return 0;
}
