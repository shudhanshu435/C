 // Write a C program to store 10 number in one dimensional array and check all number that if  2 is found at any place then change it to 5.
 
#include <stdio.h>
int main()
{
    int arr[100], d = 1, newn = 0, t, i = 0;
    printf("Enter the 10 elements of the array:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        newn = 0;
        d = 1;
        while (arr[i])
        {
            t = arr[i] % 10;
            arr[i] /= 10;
            if (t == 2)
            {
                newn = newn + 5 * d;
            }
            else
            {
                newn = newn + t * d;
            }
            d *= 10;
        }
        printf("%d\t", newn);
    }
    return 0;
}
