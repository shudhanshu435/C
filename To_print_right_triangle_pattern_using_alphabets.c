//To print right triangle pattern using alphabets

#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        int z=65;
        for ( j = 0; j < i+1; j++)         //right triangle  pattern
        // for ( j = rows; j >i; j--)      //inverted right triangle pattern
        {
            printf("%c",z++);/* code */
        }
        printf("\n");
    }

    return 0;
}
