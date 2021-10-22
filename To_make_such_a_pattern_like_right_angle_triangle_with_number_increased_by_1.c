// To make such a pattern like right angle triangle with number increased by 1.
#include <stdio.h>
int main()
{
    int i,j,rows,k=1;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }

    return 0;
}
