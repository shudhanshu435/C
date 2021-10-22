// Write a C program to accept a string and generate its code.(eg. If input is HELLO then output is IGOPT).

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",&str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]+=(i+1);
        printf("%c",str[i]);
    }

    return 0;
}
