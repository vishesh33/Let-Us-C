/*According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.
*/
#include<stdio.h>

int main(){
    int gregyear = 1900;
    int year;
    scanf("%d", &year);

    year = year - gregyear; //total year
    int leapyear = year/4; //counting for leap year
    int remainingyear = year - leapyear; //remaining leap year
    int totaldays = (remainingyear*365) + (leapyear*366); // total days
    int day = totaldays%7; 
    
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;

    return 0;
}