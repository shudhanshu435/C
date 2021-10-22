// Write a C program to input 10 numbers in one dimensional array and display all 10 addresses and it
// values using pointer variable.

#include <stdio.h>
int main()
{
    int arr[10], *p;
    printf("Enter 10 numbers of array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf("Enter Element-%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        p = &arr[i];
        printf("\n\nThe address of Element-%d is %x\nThe value of Element-%d is %d", i + 1, p, i + 1, *p);
    }

    return 0;
}
