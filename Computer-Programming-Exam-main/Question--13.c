// Write a C program to replace all R to K in given string using ASCII value.(eg. If input is RADAR
// then output is KADAK)

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s",&str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='R')
        {
            str[i]='K';
        }
        printf("%c",str[i]);

    }

    return 0;
}
