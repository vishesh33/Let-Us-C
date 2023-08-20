#include<stdio.h>

int main(){
    int n;
    int octal[10];
    int i = 0;
    scanf("%d", &n);
    while(n){
        int remainder = n % 8;
        n /= 8;
        octal[i] = remainder;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        printf("%d", octal[j]);
    }
    return 0;
}