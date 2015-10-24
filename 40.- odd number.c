#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  float rut;
  int odd, x, y;

  printf("Give me a number > 2 \n");
  scanf("%d", &x);

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
  } else {
    printf("The number is not odd\n");
  }

  return 0;
}
