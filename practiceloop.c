//print the numbers from 0 to n,if n is given by user
#include<stdio.h>
int main(){
    int n;
    printf("enter num:");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}