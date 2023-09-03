#include<stdio.h>

int main(){
    int n;
    int octal = 0, i = 1;
    scanf("%d", &n);
    while(n){
        int remainder = n % 8;
        n /= 8;
        octal += (remainder*i);
        i *= 10;
    }
    printf("Octal number = %d", octal);
    return 0;
}