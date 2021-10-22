// Write a program in C to sort elements of array in ascending order
#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter length of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in ascending order are as:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j]; //5 4 6 8 9 7 3 1 4 5
                arr[j] = temp;
            }
        }

        for (int k = 0; k < n; k++)
        {
            printf("%d  ", arr[k]);
        }
        printf("\n");
    }

    return 0;
}
