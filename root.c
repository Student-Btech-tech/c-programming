#include <stdio.h>
#include <math.h>

int main()
{
    float n, root;

    printf("Enter a number: ");
    scanf("%f", &n);

    if(n < 0)
    {
        printf("Square root of negative number is not possible.");
    }
    else
    {
        root = sqrt(n);
        printf("Square root of %.2f = %.2f", n, root);
    }

    return 0;
}