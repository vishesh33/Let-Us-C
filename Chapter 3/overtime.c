/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour.*/

#include<stdio.h>

int main(){

    int hour;
    int employee = 10;
    int overtime = 1;
    while(employee--){
        scanf("%d", &hour);
         overtime = (hour - 40) * 12;
        printf("Over time for employee %d = %d\n",10-employee, overtime);
        
    }
    return 0;
}
