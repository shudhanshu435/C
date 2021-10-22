// Write a program in C to separate odd and even integers in separate arrays.
#include <stdio.h>
int main()
{
    int len;
    printf("Enter length of array:");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements of array:\n", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even elements are:");
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Odd elements are:");
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
