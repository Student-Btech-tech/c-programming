#include<stdio.h>
int main(){
    int num1,terms;
    printf("enter num of terms:");
    scanf("%d\n",&terms);
    printf("enter first num:");
    scanf("%d\n",&num1);
    int d=5;
    for(int i=0; i<terms; i++){
        int num1= num1+d;

    }
    printf("ap=%d",num1);
    return 0;
    
}
