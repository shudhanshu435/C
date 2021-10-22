//To print Letter E pattern

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
            if (i<=1 && j< size || i>1 && i<size/2 &&j==0 || i==size/2 && j<size-(size/3) ||i>size/2 && i <size-2 && j==0 || i>=size-2 && j<size)
            {
                printf("%c",3);
                // printf("*");
            }
            else
                printf(" ");

        }
        printf("\n");

    }

    return 0;
}
