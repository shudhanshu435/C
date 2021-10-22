\\To print number from 1 to 10 except 5 using break and continue statement
#include <stdio.h>
int main()
{
    int i;
    for ( i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue;
            // break;
        }
        printf("%d\n",i);
        
    }
    
    return 0;
}
