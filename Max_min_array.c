//find max or min term in an array

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for(i=0; i<n; i++) {\
    scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    
    for(i=1; i<n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}


        