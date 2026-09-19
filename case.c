//find your letter are in lowercase or in uppercase
#include<stdio.h>
int main(){
    char letter;
    printf("enter any letter");
    scanf("%c", &letter);
    
if(letter>= 'a' && letter <= 'z'){
    printf("lowercase");
}
else{
    printf("uppercase");
}
return 0;
}