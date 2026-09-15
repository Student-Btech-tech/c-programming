//A num that remains the same when reversed
//example--->>>121, 1331, 555

//check palindrome number using function
#include<stdio.h>

int palindrome(int n){
    int original = n, reverse = 0,
    remainder;

    while(n != 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if(original == reverse)
      return 1;
      else
      return 0;
}
int main(){
    int n;
    printf("enter a num:");
    scanf("%d", &n);

    if(palindrome(n))
    printf("palindrome num");
    else
    printf("not a palindrome num");

    return 0;
}

