// Write a C program to create structure and insert 10 values of CAR having member brandname, 
// price, year and display all the CAR brandname having price more than 400000/-(4 Lakh).

#include <stdio.h>
struct car
{
    char brandname[20];
    int price;
    int year;
    
};
int main()
{
    struct car car[10];
    printf("Enter car brandname, price and year of purchase :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details of %d car\n", i + 1);
        scanf("%s%d%d", &car[i].brandname, &car[i].price, &car[i].year);
    }
    printf("The name of car/s having price more than 400000/-(4 Lakh) is/are:\n");
    for (int i = 0; i < 10; i++)
    {
        if (car[i].price > 400000)
        {
            printf("%s\n", car[i].brandname);
        }
    }
    return 0;
}
