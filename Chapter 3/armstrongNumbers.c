#include <stdio.h>

int armstrong(int num){
    int sum = 0;
    while(num){
        int temp = num % 10;
        sum += (temp*temp*temp);
        num /= 10;
    }
    return sum;
}

int main(){
    int temp, sum;
    for(int i = 1; i <= 500; i++){
        sum = armstrong(i);
        if(i == sum) printf("%d\n", i);
    }
}