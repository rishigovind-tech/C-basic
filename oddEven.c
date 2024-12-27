// Create function to get the count of even numbers and odd numbers in an array.

#include <stdio.h>

void viewCount(int arr[], int size, int *odd, int *even)
{

    *odd = 0;
    *even = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            (*even)++;
        }
        else
        {
            (*odd)++;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int odd, even;

    viewCount(arr, size, &odd, &even);

    printf("Number of even : %d \n", even);
    printf("Number of odd : %d \n", odd);
}