//to check num is prime or not
#include<stdio.h>

//function declaration
void is_prime(int num);

int main(){
    int num = 5;
    is_prime(num);
    return 0;
}

void is_prime(int num){
    int isPrime=1;

    if (num<=1){
        isPrime=0;
    }
    else{
        for(int i=2; i<num; i++)
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }

if(isPrime == 1){
    printf("num is prime");
}
else{
    printf("num is not prime");
}
}

