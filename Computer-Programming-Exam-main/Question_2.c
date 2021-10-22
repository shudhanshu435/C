// Write a C program to display following pattern if input is “WORLD”
// W
// WO
// WOR
// WORL
// WORLD

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s",str);
    for (int i = 0; str[i] !='\0'; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }

    return 0;
}
