// Write a program to produce the following output:
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, m, k = 0, l, p = 0, o, a, b = 0, c = 0;
    m = 'G';
    o = 'F';
    for (j = 1; j <= 7; j++)
    {
        for (i = 'A'; i <= (m - k); i++)
        {
            printf("%c", i);
        }
        for (a = 1; a < b; a++)
        {
            printf(" ");
        }
        for (l = (o - p); l >= 'A'; l--)
        {
            printf("%c", l);
        }
        p = p + c;
        b = b + 2;
        k = k + 1;
        c = 1;
        printf("\n");
    }
    getch();
}
