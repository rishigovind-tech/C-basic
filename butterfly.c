#include <stdio.h>

int main()
{
    int row = 5;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // printf("\n");

        for (int s = 1; s <= 2*(row-i); s++)
        {
            printf("  ");
        }
        // printf("\n");

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = row - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        for (int s = 1; s <= 2*(row-i); s++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
