#include <stdio.h>

int main(){
    printf("\nEnter the class obtained");
    int c;
    scanf("%d", &c);
    int fail;
    printf("Enter number of subjects failed");
    scanf("%d", &fail);
    switch(c){
        case 1:
        if(fail > 3) printf("\nNo grace");
        if(fail <= 3) printf("\nGrace marks = 5");
        break;
        case 2:
        if(fail > 2) printf("\nNo grace");
        if(fail <= 2) printf("\nGrace marks = 4");
        break;
        case 3:
        if(fail > 1) printf("\nNo grace");
        if(fail <= 1) printf("\nGrace marks = 5");
    }
    return 0;
}