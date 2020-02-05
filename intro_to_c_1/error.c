#include <stdio.h>

int get(int array[], int size, int index) {
  if (index >= size || index < 0) return 0; 
  else                    return array[index];
}

void main() {
  int data[5] = { 97,98,99,100,101 };
  printf( "line 1: %d %d \n", data[ 0], data[4] );
  printf( "line 2: %d %d \n", data[-1], data[5] ); //this doesn't cause an "error" per say, but it accesses memory that shouldn't be 
}

