//To find the roots and nature of roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, det, root1, root2, real, imag;
    printf("enter the value of a,b,c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    det = b * b - 4 * a * c;
    if (det > 0)
    {
        printf("Roots are real and unequal and they are--");
        root1 = (-b + sqrt(det)) / 2 * a;
        root2 = (-b - sqrt(det)) / 2 * a;
        printf("root1=%.2lf \n root2=%.2lf", root1, root2);
    }
    if (det == 0)
    {
        printf("Roots are real and equal and they are--");
        root1 = root2 = -b / (2 * a);
        printf("root1=%.2lf \n root2=%.2lf", root1, root2);
    }
    if (det < 0)
    {
        printf("Roots are imaginary and is equal to--");
        real = -b / (2 * a);
        imag = sqrt(-det) / (2 * a);
        printf("root1=%.2lf + %.2lf i  \n root2=%.2lf - %.2lf i", real, imag, real, imag);
    }

    return 0;
}

