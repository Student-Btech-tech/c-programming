//write 2 functions Hello & Goodbye
#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

//function call
int main(){
    printHello();
    printGoodbye();
    return 0;
}
//function definition
void printHello(){
    printf("Hello\n");
}

void printGoodbye(){
    printf("Goodbye\n");
}

