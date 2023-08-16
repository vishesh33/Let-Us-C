#include<stdio.h>

int main(){

    int year;
    scanf("%d", &year);
    //1 == leap year; 0 == not a leap year;
    int y = (year % 100 == 0) ? ((year % 400 == 0) ? 1:0) : (year % 4 == 0) ? 1:0;
    if(y) printf("Leap year");
    else printf("Not a leap year");
    return 0;
}