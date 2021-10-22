
// Write a C program to display all odd number up to N but not display the number having 5 in its unit
// place.(eg. If N=23 then it will display 1,3,7,9,11,13,17,19,21,23)

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        if (i%2==0 || i%5==0)
        {
            continue;
        }
        printf("%d ",i);
        // if (i%2!=0 && i%5!=0)
        // {
        // printf("%d ",i);
        // }
    }

    return 0;
}
