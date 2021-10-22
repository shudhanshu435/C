// Write a C program if input is BRICS then display BARAIACAS.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string:");
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (i != 0)
        {
            printf("%c", 65);
        }

        printf("%c", str[i]);
    }

    return 0;
}
