#include <stdio.h>

int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for(int i = 0; i < 10; i++){
        printf("Element %d: %d\n", i +1, arr[i]);
    }

    return 0;
}