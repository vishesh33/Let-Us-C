#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int first = n, last;
    while(first >= 10){
        first /= 10;
    }
    last = n%10;
    printf("%d %d", first, last);
    return 0;
}