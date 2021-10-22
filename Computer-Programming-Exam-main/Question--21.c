// Write a C program to display following pattern:
// 1 100 3 99 5 98 7 97 ……..1

#include <stdio.h>
int main()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d %d  ",1+2*i,100-i);
    }
    return 0;
}
