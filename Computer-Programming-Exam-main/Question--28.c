// Write a C program to sort the given numbers in descending order.(e. g. if numbers are 23 45 67 12 9 5 then
// descending order is 67 45 23 12 9 5

#include <stdio.h>
int main()
{
    int arr[10],temp;
    printf("Enter the number you want to sort out:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d  ",arr[i]);

    }

    return 0;
}
