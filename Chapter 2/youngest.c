/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include<stdio.h>

int main(){
    int ram, shyam, ajay;
    scanf("%d %d %d",&ram, &shyam, &ajay);
    if(ram < shyam){
        if(ram < ajay) printf("Ram is youngest");
        else printf("Ajay is youngest");
    } else{
        if(shyam < ajay) printf("Shyam is youngest");
        else printf("Ajay is youngest");
    }
    return 0;
}