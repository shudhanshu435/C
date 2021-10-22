// Write a C program to generate following pattern:
// P
// **
// PPP
// ****
// PPPPP

#include <stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                    printf("**");
            }
            else
                printf("P");
        }
        printf("\n");
    }

    return 0;
}
