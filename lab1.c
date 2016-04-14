#include <stdio.h>
#include <stdlib.h>
void runFib();
void runFact();
void runCollatz();
int fib(int n);
int fact(int n);
int collatz(int n, int count);

int main() {
    int option = 1;
    printf("Hola, which program would you like to run?\n1 : fibonacci\n2 : factorial\n3 : that collatz thing\nInput: ");
    scanf("%d", &option);
    switch(option) {
        case 1: runFib();
        case 2: runFact();
        case 3: runCollatz();
        default: printf("\nGoodbye\n");
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
void runCollatz() {
    int collatzNumber = 0;
    printf("\nCollatz has been chosen. Enter the number you want to know the collatz of\nInput: ");
    scanf("%d", &collatzNumber);
    collatzNumber = collatz(collatzNumber, 0);
    printf("\nthe answer is: %d \n", collatzNumber);
}
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int fact(int n) {
    if ( n == 0 ) return 1;
    return(n * fact(n - 1));
}

int collatz(int n, int count) {
    if (n < 1) return 0;
    if (n == 1) return count;
    if (n % 2 == 0) return collatz(n/2, count+1);
    return collatz(3*n + 1, count+1);
}