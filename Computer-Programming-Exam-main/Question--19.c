// Write a C program to take a input as string and change each alternate letter to capital to small or small to
// capital.(e.g. if input string is JaiHind then output will be jaIHInD).

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] > 'A' && str[i] < 'Z')
            {
                str[i] += 32;
            }
            if (str[i] > 'a' && str[i] < 'z')
            {
                str[i] -= 32;
            }
        }
        printf("%c",str[i]);
    }
    return 0;
}
