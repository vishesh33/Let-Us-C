#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int factorial = 1;
    while(n){
        factorial *= --n;
    }
    printf("%d", factorial);
    return 0;
}
