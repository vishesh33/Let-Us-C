#include <stdio.h>

int isPrime(int n)
{
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    for(int i = 1; i <= 300; i++){
        if(isPrime(i)) printf("%d\n", i);
    }
}