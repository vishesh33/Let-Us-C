#include<stdio.h>

//Calculation of simple interest
int main(){
    int p, n;
    float r, si;
    /*p = 1000;
    r = 3;
    n = 5;*/
    scanf("%d %f %d", &p, &r, &n);
    //Formula of simple interest
    si = p*r*n/100;
    printf("%0.1f\n", si);
}