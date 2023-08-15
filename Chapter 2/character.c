/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.*/

#include<stdio.h>

int main(){

    char c;
    scanf("%c", &c);
    if(c >= 65 && c <= 90) printf("Capital letter");
    else if(c >= 97 && c <= 122) printf("Small letter");
    else if(c >= 48 && c <= 57) printf("Number");
    else if((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127)){
        printf("Special character");
    }
    return 0;
}