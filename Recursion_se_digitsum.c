
#include <stdio.h>

int sum(int n);

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of digits = %d", result);

    return 0;
}

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) + sum(n / 10);
}

