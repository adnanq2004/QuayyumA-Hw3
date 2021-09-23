#include <stdio.h>

int problem1() {

  int sum = 0;
  int count = 0;
  for (count = 1; count <=1000; count++) {
    if (count % 3 == 0) {
      sum += count;
    }
    else if (count % 5 == 0) {
      sum += count;
    }
  }

  printf("%d\n", sum);
  return 0;

}

int fibonnaci(int place) {

  if (place <= 2) {
    return 1;
  }
  else {
    return (fibonnaci(place-1) + fibonnaci(place-2));
  }

}

int problem2() {

  int sum = 0;
  for (int i = 1; fibonnaci(i) <= 4000000; i++) {
    sum += fibonnaci(i);
  }
  printf("%d\n", sum);
  return 0;

}

int isprime(int num) {

  int factors = 0;
  for (int i = 1; i < num/2; i++) {
    if (num%i == 0) {
      factors++;
    }
  }
  return (factors == 0);

}

int problem3() {

  int j = 0;
  int primenum = 600851475143;
  for (int i = primenum/2; i > 0; i--) {
    if (primenum%i == 0 && isprime(i)) {
      j = i;
      break;
    }
  }

  printf("%d\n", j);
  return 0;

}

int problem5() {

  int increment = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
  int number = 0;
  int reached = 0;
  int tally = 0;
  while (!reached) {
    number += increment;
    tally = 0;
    for (int i = 2; i <= 20; i++) {
      if (number % i == 0) {
        tally++;
      }
    }
    if (tally == 19) {
      reached = number;
    }
  }
  printf("%d\n", reached);
  return 0;

}

int problem6() {

  int sumofsquares = 0;
  for (int i = 1; i <= 100; i++) {
    sumofsquares += i*i;
  }

  int squareofsums = 0;
  for (int i = 1; i <= 100; i++) {
    sumofsquares += i;
  }
  sumofsquares = sumofsquares * sumofsquares;

  int difference = sumofsquares - squareofsums;
  printf("%d\n", difference);
  return 0;

}

int main() {

  problem1();
  problem2();
  // problem3();
  problem5();
  problem6();

  return 0;

}
