#include <stdio.h>

int main(){

    int n;
    int reverse = 0, remainder;
    scanf("%d", &n);
    int temp = n;
    while(temp != 0){
        remainder = temp%10;
        reverse = reverse*10 + remainder;
        temp /= 10;
    }
    printf("%d\n", reverse);
    if(n == reverse) printf("It is palindrome");
    else printf("It is not a palindrome");
    return 0;
}