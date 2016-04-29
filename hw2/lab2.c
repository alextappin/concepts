#include <stdio.h>
#include <stdlib.h>

void encodeFibOf(unsigned long long n);
unsigned long long fib(unsigned long long n);
unsigned long long fiboTail(unsigned long long n, unsigned long long a, unsigned long long b);

int main() {
  unsigned long long number = 0;
  printf("Enter the number you would like to encode\n: ");
  scanf("%llu", &number);
  if (number < 0) {
    printf("\n0, bye");
    return 0;
  }
  encodeFibOf(number);
  return 0;
}

void encodeFibOf(unsigned long long n) {
  unsigned long long tempFib = 0;
  unsigned long long counter = 0;
  unsigned long long previous = 0;
  while (n - previous > 0) {
    while ( tempFib <= n) {
      previous = tempFib;
      counter++;
      tempFib = fiboTail(counter, 0, 1);
    }
    printf("Fib encoding of %llu is %llu (@ %llu) remainder is %llu\n", n, previous, counter - 1, n - previous);
    encodeFibOf(n-previous);
    break;
  }
}

unsigned long long fib(unsigned long long n) {
  if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

unsigned long long fiboTail(unsigned long long n, unsigned long long a, unsigned long long b){
  if (n == 0) return a;
  if (n == 1) return b;
  return fiboTail(n - 1, b, a + b);
}

