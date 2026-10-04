#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("ARRAY REVERSE PROGRAM\n");


    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("Original Array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse Array : ");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    

    return 0;
}