// Print number 7
// ♥♥♥♥♥♥♥♥♥♥♥♥
//            ♥
//           ♥
//          ♥
//         ♥
//        ♥
//       ♥
//      ♥
//     ♥
//    ♥
//   ♥
//  ♥

#include <stdio.h>
int main()
{
    int num;
    printf("Enter size:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {

            for (int j = 0; j < num; j++)
            {
                printf("%c", 3);
            }
        }
        else
            for (int z = num; z > i; z--)
            {
                printf(" ");
            }
        printf("%c", 3);

        printf("\n");
    }

    return 0;
}
