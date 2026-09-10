//to check num is even or odd

#include<stdio.h>
void is_odd(int num);
int main(){
    int num=7;

    is_odd(num);
    return 0;
}

void is_odd(int num){
    if(num%2==0){
        printf("num is even");
    }
    else{
        printf("num is odd");
    }
}