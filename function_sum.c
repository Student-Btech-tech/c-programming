//sum of two numbers with the help of function
#include<stdio.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("enter first num:");
    scanf("%d", &a);
    printf("enter second num:");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("sum is %d", s);

    return 0;
}

int sum(int x,int y){
    return x+y;
}