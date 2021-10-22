// Write a program to swap two number using third variaBLE
// #include <stdio.h>
// int main()
// {
//     int a,b,t;
//     printf("Enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("Before swapping: a=%d , b=%d\n",a,b);
//     t=a;
//     a=b;
//     b=t;
//     printf("After swapping: a=%d , b=%d\n",a,b);
//     return 0;
// }

//Write a prgoram to swap two number without using any third variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping : a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping : a=%d,b=%d",a,b);
    return 0;
}

