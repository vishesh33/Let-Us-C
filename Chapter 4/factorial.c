#include<stdio.h>

unsigned long fact(int i){
    if(i == 1 || i == 0)
        return 1;
    else
        return i*fact(i-1);
}
int main(){
    int i;
    scanf("%d", &i);
    printf("Factorial = %lu", fact(i));
    return 0;
}