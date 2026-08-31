#include<stdio.h>
int main(){
    int num1,num2,result;
    int op;
    printf("enter the two operands num1,num2");
    scanf("%d %d", &num1, &num2);
    printf("enter the operator to perform operation");
    scanf("%d", &op);
  
    if(op==1){
        result=num1=num2;
        printf("%d",result);
    }
    else if(op==2){
        result=num1-num2;
         printf("%d",result);
    }
    else if(op==3){
        result=num1-num2;
        printf("%d",result);

    }
    else if(op==4){
    result=num1-num2;
         printf("%d",result);
    }
    else{
        printf("wrong operation");
        return 0;
    }}

