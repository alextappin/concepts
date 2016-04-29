#include <stdio.h>
#include <stdlib.h>

void encodeFibOf(unsigned long n);
unsigned long fib(unsigned long n);

int main() {
  unsigned long number = 0;
  printf("Enter the number you would like to encode\n: ");
  scanf("%lu", &number);
  if (number < 0) {
    printf("\n0, bye");
    return 0;
  }
  encodeFibOf(number);
  return 0;
}

void encodeFibOf(unsigned long n) {
  unsigned long tempFib = 0;
  unsigned long counter = 0;
  unsigned long previous = 0;
  while (n - previous > 0) {
    while ( tempFib <= n) {
      previous = tempFib;
      counter++;
      tempFib = fib(counter);
    }
    printf("Fib encoding of %lu is %lu (@ %lu) remainder is %lu\n", n, previous, counter - 1, n - previous);
    encodeFibOf(n-previous);
    break;
  }
}

unsigned long fib(unsigned long n) {
  if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
