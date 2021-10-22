//.................Printing start pattern and reverse star pattern using function

#include <stdio.h>
void starpattern(int);
void rstarpattern(int);

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern:");
    scanf("%d", &type);
    printf("How many rows do you want?");
    scanf("%d", &rows);

    switch (type)
    {
    case 0:
        starpattern(rows); /* code */
        break;
    case 1:
        rstarpattern(rows);
        break;
    default:
        printf("You have entered an invalid choice.");
        break;
    }
    return 0;
}
void rstarpattern(int m)
{
    for (int i = 1; i <= m; i++)
    {
        /* code */
        for (int j = m; j >= i; j--)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
}
void starpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
}
