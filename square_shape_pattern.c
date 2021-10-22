//To print square shape star pattern 
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
            printf(" *");
            
        }
        printf("\n");
        
    }
    
    return 0;
}
