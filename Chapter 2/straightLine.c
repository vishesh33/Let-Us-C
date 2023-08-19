/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/

#include<stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if((x1-x3)*(y1-y2) == (x1-x2)*(y1-y3)) printf("Straigh line");
    else printf("Not a straight line");
    return 0;
}