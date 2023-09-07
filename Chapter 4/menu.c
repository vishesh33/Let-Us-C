#include<stdio.h>
#include<stdlib.h>

void main( )
{
    int choice ;
    while ( 1 )
    {
        printf ( "\n1. Factorial" ) ;
        printf ( "\n2. Prime" ) ;
        printf ( "\n3. Odd/Even" ) ;
        printf ( "\n4. Exit" ) ;
        printf ( "\nYour choice? " ) ;
        scanf ( "%d", &choice ) ;
        int n;
        switch ( choice )
        {
            case 1 :
            /* logic for factorial of a number */
                printf("\nEnter number: ");
                scanf("%d", &n);
                int fact = 1;
                if(n == 1 || n == 0)
                    printf("Factorial = 1");
                for(int i = 1; i < n; i++){
                    fact *= i;
                }
                printf("\nFactorial = %d", fact);
            break ;
            case 2 :
            /* logic for deciding prime number */
                printf("\nEnter number: ");
                scanf("%d", &n);
                int prime = 1;
                for(int i = 2; i < n; i++){
                    if(n % i == 0) prime = 0;
                }
                if(prime) printf("\nNumber %d is prime", n);
                else printf("\nNumber %d is not prime", n);
            break ;
            case 3 :
            /* logic for odd/even */
                printf("\nEnter number: ");
                scanf("%d", &n);
                if(n % 2 == 0) printf("Even");
            else printf("Odd");
            break ;
            case 4 :
            exit(0) ;
        }
    }
}