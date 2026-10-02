//calculate the avg wit the help of array

#include <stdio.h>

int main()
{
    int arr[5], sum = 0;
    float average;

    printf("Enter 5 elements:\n");

    for( int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / 5;

    printf("Average = %.2f", average);

    return 0;
}