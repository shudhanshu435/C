//To print right triangle pattern using numbers
#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j < i+1; j++)
        {
            printf("%d",j);/* code */
        }
        printf("\n");
    }

    return 0;
}
