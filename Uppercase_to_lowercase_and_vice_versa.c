//write a program to convert small letter to capital letter
#include <stdio.h>
int main()
{
    char a,b;
    // printf("Enter a small letter: ");
    printf("Enter a capital letter: ");
    scanf("%c",&a);
    b= a + 32;
    // printf("Capital letter is %c",b);
    printf("Small letter is %c",b);
    return 0;
}
