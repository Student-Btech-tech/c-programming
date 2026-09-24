#include <stdio.h>

int digitSum(int n);

int main() {
    int n;

    printf("enter a positive num: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("please enter positive num.\n");
    } else {
        printf("Digits ka sum: %d\n", digitSum(n));
    }

    return 0;
}

int digitSum(int n) {
    if (n == 0) {           
        return 0;
    }

    return (n % 10) + digitSum(n / 10);
}

