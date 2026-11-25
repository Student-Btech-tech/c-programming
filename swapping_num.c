#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter first num:");
    scanf("%d",&a);
    printf("enter second num:");
    scanf("%d",&b);

    printf("before swapping: a=%d,b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("aftr swapping: a=%d,b=%d\n",a,b);
    return 0;
}
