//find greatest common factor of two numbers

#include<stdio.h>
int main(){
    int num1,num2,gcd;
    printf("enter two numbers:");
    scanf("%d %d", &num1,&num2);

    for(int i=1; i<=num1 && i<=num2; i++){
        if(num1 % i==0 && num2 %i ==0){
            gcd = i;
        }
    }
    printf("gcd of %d and %d is: %d\n",num1,num2,gcd);
    return 0;
}