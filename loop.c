#include <stdio.h>

int main()
{

    // int limit;

    // printf("Enter the limit");
    // scanf("%d",&limit);

    // for (int i = 1; i < limit; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         printf("%d-",i);
    //     }

    // }

    int row = 5;

    // for (int i = row; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    int num=1;
    int row1=4;

    for (int i = 1; i <= row1; i++)
    {
        for (int j = 1 ; j <= i; j++)
        {
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }

    // printf("\n");

    // for (int i = row; i >= 1; i--)
    // {
    //     for (int s = 1; s <= row - i; s++)
    //      {
    //         printf("  ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= row; i++)
    {
        for (int s = 1; s <= row - i; s++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // ------------------------------------------

    int n=4;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j )% 2 == 0)
    //         {
    //             printf("1 ");
    //         }
    //         else
    //         {
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= row; i++)
    // {

    //     for (int j = 1; j <= row; j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");

    // }
}
