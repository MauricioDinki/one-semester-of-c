#include <stdio.h>

int main(int argc, char const *argv[]) {

  float side, perimeter;

  printf("Give me the side of the square \n");
  scanf("%f", &side);

  perimeter = side*4;
  printf("The perimeter is %f \n", perimeter );

  return 0;
}
