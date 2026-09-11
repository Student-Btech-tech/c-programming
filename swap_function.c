//swapping of two numbers using function

#include<stdio.h>
//declaration
void swap_number(int*x, int*y);

int main(){
    int a = 1, b = 3;
    swap_number(&a, &b);
    printf("after swap in main: a=%d b=%d" ,a,b );
    return 0;
}

void swap_number(int *x, int *y){
    int c;
    c= *x;
    *x=*y;
    *y=c;

}