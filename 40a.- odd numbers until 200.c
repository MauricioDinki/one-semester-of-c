#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  float rut;
  int odd, x, y;
  int nodd = 0;

  for (x = 2; x <= 200; x++) {
    rut = sqrt(x);
    odd = 0;
    for (y = 2; y < rut + 1; y++) {
      if (x % y == 0) {
        odd = 1;
        break;
      }
    }
    if (odd == 0) {
      printf("The number %d is odd \n", x);
      nodd ++;
    }
  }

  printf("There is %d odd numbers in the range \n", nodd);

  return 0;
}
