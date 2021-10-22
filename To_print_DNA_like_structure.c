//DNA like structure
#include <stdio.h>
int main()
{
    int i, j, row, l, k;
    printf("Enter the number of Rows : ");
    scanf("%d", &row);
    int t=1;
    while(t<5)
    {
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= 1; j--)
            if (i == j || j == row - i + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        printf("\n");
    }
    t++;
    }

    return 0;
}
