#include <stdio.h>

int main(int argc, char const *argv[]) {

  float side1, perimeter;

  printf("Give me the side of the rhombus \n");
  scanf("%f", &side1);

  perimeter = side1*4;
  printf("The perimeter is %f \n", perimeter );

  return 0;
}
