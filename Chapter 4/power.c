#include<stdio.h>

unsigned long power(int a, int b){
    if(b != 0) return (a * power(a, b-1));
    else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d to the power %d = %lu", a, b, power(a, b));
    return 0;
}