#include <stdio.h>
#include <stdlib.h>
void runFib ();
void runFact ();
int fib (int n);
int fact (int n);

int main() {
    int option = 1;
    printf("Hola, which program would you like to run?\n1 : fibonacci\n2 : factorial\n3 : that theorem thing\nInput: ");
    scanf("%d", &option);
    switch(option) {
        case 1: runFib();
        case 2: runFact();
    }
    return 0;
}
void runFib() {
    int fibNumber = 0;
    printf("\nFib has been chosen. Enter the nth number of the fib\nInput: ");
    scanf("%d", &fibNumber);
    fibNumber = fib(fibNumber);
    printf("\nthe answer is: %d \n", fibNumber);
}
void runFact() {
    int factNumber = 0;
    printf("\nFactorial has been chosen. Enter the number you want to know the factorial of\nInput: ");
    scanf("%d", &factNumber);
    factNumber = fact(factNumber);
    printf("\nthe answer is: %d \n", factNumber);
}

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int fact(int n) {
    if ( n == 0 ) return 1;
    return(n * fact(n - 1));
}