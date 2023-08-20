/*Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered.*/

#include<stdio.h>

int main(){
    //User input for number of inputs
    int n;
    scanf("%d", &n);
    int i;
    int pos = 0;
    int neg = 0;
    int zero = 0;
    while(n--){
        scanf("%d", &i);
        if(i > 0) pos++;
        if(i < 0) neg++;
        if(i == 0) zero++;
    }
    printf("Positive = %d, Negative = %d, Zeros = %d", pos, neg, zero);
    return 0;
}