//To print pyramid shape star pattern
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = size - i; j > 0; j--)
        {
            printf("  ");
        }
        for (int z = 0; z <= 2 * i; z++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
