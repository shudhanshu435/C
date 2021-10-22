//To print Square Frame or Letter O pattern

#include <stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i==0 && j<size || i>0 && i<size && (j==0 || j==size-1) || i==size-1 && j< size)
            {
                printf(" %c",3);
                // printf("*");
            }
            else
                printf("  ");

        }
        printf("\n");

    }

    return 0;
}
