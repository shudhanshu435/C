// TO PRINT EMOJI PATTERN

#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0 || i==4 && j<5 || i>0 && i<4 && j==0 || j==4)
            {
                printf(" %c",3);
            }
            else if (i==1 && (j==1 || j==3))
            {
                printf(" %c",2);
            }
            else if (i==2 && j==2)
            {
                printf(" %c",1);
            }
            else if (i==3 && j==2)
            {
                printf(" -");
            }
            else
            printf("  ");
            
        }
        printf("\n");
        
    }
    return 0;
}
