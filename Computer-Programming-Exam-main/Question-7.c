// Write a C program to find total number alphabet available in given string before alphabet P.(eg in
// string University total number of alphabet before p is n,i,e,i so total 4 will be output.).

#include <stdio.h>
#include <string.h>
int main()
{
    char str[25];
    int count=0;
    printf("Enter a string:\n");
    scanf("%s",&str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]<'p')
        {
            count++;
        }

    }printf("Total number of  alphabet before p is %d",count);

    return 0;
}
