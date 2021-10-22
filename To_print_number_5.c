//To print number 5

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
            if (i<=1 && j<size || i>1 && i<(size/2) && j==0 || i==(size/2) && j<size ||i>(size/2) && i<(size-2) && j==size-1 ||i>=(size-2) && j<size )
            {
                printf("%c",3);    //using heart 
                // printf("*");    //using star(asterisk)
            }
            else
                printf(" ");

        }
        printf("\n");

    }

    return 0;
}
