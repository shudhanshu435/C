//To print Letter A

#include<stdio.h>
int main()
{
    for (int i = 0; i < 20; i++)
    {
        if (i<10)
        {
            continue;
        }
        
        for (int j = 0; j < 20; j++)
        {
            if (i==j || j==20-i-1)
            {
                if (i==15)
                {
                    continue;
                }
                
                printf("%c",2);
            }
            if (i==15 && (j>=5 && j<=11))
            {
                printf("%c",2);
            }
            
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
