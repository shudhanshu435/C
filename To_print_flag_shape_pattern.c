//Print Flag shape
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 2 * size; j++)
        {
            // if (i <= 2 && j >= (size - 2) && j < size +(size/2) || i > 2 && i < size - 3 && j == size - 2 || i >= size - 3 && j >= size / 2 && j <= size + (size / 3))
            if (i <= 2 && j >= (size - 2) && j < size +(size/2) || i > 2 && i < size - 3 && j == size - 2 || i == size - 3 && j >= (size / 2)+2 && j < size+(size/5)|| i==size-2 && j >= (size / 2)+1 && j < size+(size/4)||i==size-1 && j >= (size / 2) && j < size+(size/3) )
            {
                printf("%c", 4);   //using diamond
                // printf("*");    //using asterisk
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
