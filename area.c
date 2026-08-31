#include<stdio.h>
int main(){
    int length, bredth, area;
    printf("enter length,bredth");
    scanf("%d %d", &length ,&bredth);
    area=length*bredth;
    printf("area is:%d\n", area);
    return 0;
}