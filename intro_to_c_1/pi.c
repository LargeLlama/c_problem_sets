#include <stdio.h>
#define TEST_VALS { -1, 0, 1, 2, 10, 100 }

/* function to estimate pi using given number of terms */
double estimatePi(int terms) {
  if (terms <= 0) return 0.0;   // ignore bad inputs
  double numer = -1.0, denom = 0.0, pi = 0.0;

  for (int i=0; i<terms; i++) { // loop through terms
    numer *= -1;
    denom  = 2*i + 1;
    pi    += numer / denom;
  }

  return 4*pi;
}

/* function to test estPi() */
void testEstimatePi() {
  int vals[] = TEST_VALS;

  for (int i=0; i<6; i++) {
    printf( "%3d %f\n", vals[i], estimatePi( vals[i] ) );
  }
}

/* function to interact with user */
void interact() {
  int terms = 1;
  printf("Welcome to the Pi Estimator!\n");

  while (terms > 0) {
    printf("How many terms do you want (0 to quit)? "); 
    scanf("%d", &terms);
    printf("Pi with %d terms is %f\n", terms,  estimatePi(terms));
  }

  printf("Goodbye!");
}

/* main function, called when the program runs */
void main() { 
  testEstimatePi(); 
  interact();
}

