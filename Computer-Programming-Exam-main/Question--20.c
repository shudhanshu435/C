// Write a C program using structure of student having rollno, name, branch as member and insert 10 students
// detail. Find the total students name length is more than 10.

#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    char branch[10];
};
struct student s[10];
int main()
{
    printf("Enter roll no , name and branch of Students.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Student-%d:\n", i + 1);
        scanf("%d%s%s", &s[i].rollno, &s[i].name, &s[i].branch);
    }
    printf("Total students whose name length is more than 10 are as:\n ");
    for (int i = 0; i < 10; i++)
    {
        if (strlen(s[i].name) > 10)
        {
            printf("%s  ", s[i].name);
        }
    }

    return 0;
}
