
// Write a C program to find total number that is even and divisible by 3 in given two dimensional
// matrix using pointer:
4 47 9
3 45 12
30 18 120

#include <stdio.h>
int main()
{
    int count=0,arr[3][3]={{4,47,9},
                           {3,45,12},
                           {30,18,120}};
    int *p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p=&arr[i][j];
            if (*p%2==0 && *p%3==0)
            {
                count++;
            }

        }

    }printf("Total required number is %d",count);

    return 0;
}
