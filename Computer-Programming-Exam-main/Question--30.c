// Write a program in C to print a string in reverse using a pointer.(e.g. if input is GENUINE then reverse output
// is ENIUNEG)

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],*ptr;
    printf("Enter a string:");
    scanf("%s",&str);
    for (int i = strlen(str); i >=0; i--)
    {
        ptr=&str[i];
        printf("%c",*ptr);
    }

    return 0;
}
