#include<stdio.h>
int main(){
    int length,bredth,height ,volume;
    printf("enter length,bredth,height");
    scanf("%d %d %d", &length ,&bredth,&height);
    volume=length*bredth*height;
    printf("volume is:%d\n",volume);
    return 0;
}
