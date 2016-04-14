#include <stdio.h>
#include <stdlib.h>
int runFib ();
int fib (int n);

int main() {
    int option = 1;
    printf("Hola, which program would you like to run?\n1 : fibonacci\n2 : factorial\n3 : that theorem thing\nInput: ");
    scanf("%d", &option);
    switch(option) {
        case 1: runFib();
    }
    return 0;
}
int runFib() {
    int fibNumber = 0;
    printf("\nFib has been chosen. Enter the nth number of the fib\nInput: ");
    scanf("%d", &fibNumber);
    fibNumber = fib(fibNumber);
    printf("\nthe answer is: %d \n", fibNumber);
    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}