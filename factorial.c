//print the factorial of a num n.
#include<stdio.h>
int main(){
    int n;
    printf("enter num:");
    scanf("%d", &n);

    int fact=1;

    for(int i=1; i<=n; i++){
        fact=fact*i;

    }
    printf("final factorial is %d", fact);
    return 0;
}