// Write a C program to count total number of bit 1 in given number N.(e.g if Number is 14 means in binary 1110
// total number of 1 in binary is 3 will be output).

#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i = 0; i < 32; i++)
    {
        if (num >> i & 1)
        {
            count++;
        }
    }
    printf("Total number of bit 1 is %d", count);

    return 0;
}
