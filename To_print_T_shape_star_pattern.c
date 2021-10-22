//To print T shape star pattern

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
            if (i<1 && j<size || i>=1 && i<size-(size/4) && j==size/2)
            {
                printf("*");
            }
            else
                printf(" ");
            
        }
        printf("\n");
        
    }
    
    return 0;
}
