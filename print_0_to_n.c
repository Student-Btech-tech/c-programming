//print the number from 0 to n where n is given by user
#include<stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d", &n);
    
    for(int i=0; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}