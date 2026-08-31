//find the largest among three numbers
#include<stdio.h>
int main(){
    int a=45, b=56, c=76;
    if(a>b && a>c){
        printf("a is largest");
    }
    else if(b>a && b>c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
    return 0;
}