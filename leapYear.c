#include <stdio.h>

void leap(int year)
{

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("It is a leap year");
            }
            else
            {
                printf("it is not a leap year");
            }
        }
        else
        {
            printf("it is a leap year");
        }
    }
    else
    {
        printf("it is not a leap year");
    }

    
}

int main()
{

    int year;

    printf("Enter the year to check : \n");

    scanf("%d", &year);

    leap(year);
}