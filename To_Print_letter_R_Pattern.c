//PRINT LETTER R
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    for (int i = 0; i <= size / 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i <= 1 && j < size || i > 1 && i < size / 2 && (j == 0 || j == 1 || j == size - 2 || j == size - 1) || (i == size / 2-1 || i == size / 2 ) && j < size)
            {
                printf(" %c", 4);
                // printf("*");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    for (int x = 0; x < size / 2; x++)
    {
        printf(" %c %c", 4, 4);
        for (int z = 0; z < x; z++)
        {
            printf("    ");
        }
        printf("%c%c%c ", 4,4, 4);
        printf("\n");
    }

    return 0;
}
