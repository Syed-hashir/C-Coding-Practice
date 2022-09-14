#include <stdio.h>
int power(int a, int b) {
  int total = 0;
  for (int i = 1; i <= b; i++) {
    total = total + a;
    // this is comment
    // printf(" %d\n", total);
  }
  return total;
}