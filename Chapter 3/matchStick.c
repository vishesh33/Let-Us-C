#include<stdio.h>

int main(){

    int matchstick = 21;
    while(1){
        int user = 0;
        int comp = 0;
        printf("Select match stick: ");
        scanf("%d", &user);
        if(user > 4 || user < 1)
            continue;
        comp = 5 - user;
        printf("Comp selected: %d\n", comp);
        matchstick -= user + comp;
        printf("Matchsticks = %d\n", matchstick);
        if(matchstick == 1){
            printf("Number of matches left = %d \nYou loose", matchstick);
            break;
        }
    }
    return 0;
}