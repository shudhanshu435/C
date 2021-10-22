// Write a C program using structure to make a BOOK structure and its member bookid, bookname, bookprice
// and insert 10 book details and display the costliest bookname.)

#include <stdio.h>
struct BOOK
{
    int bookid;
    char bookname[20];
    int bookprice;
};
struct BOOK bk[10];
int main()
{
    printf("Enter the details of book:");
    for (int i = 0; i < 10; i++)
    {
        printf("Book %d:-",i+1);
        scanf("%d%s%d", &bk[i].bookid, &bk[i].bookname, &bk[i].bookprice);
    }
    struct BOOK cost = bk[0];
    for (int i = 0; i < 10; i++)
    {

        if (bk[i].bookprice >= cost.bookprice)
        {
            cost = bk[i];
        }
    }
    printf("The costliest bookname with cost %d is %s", cost.bookprice, cost.bookname);
    return 0;
}
