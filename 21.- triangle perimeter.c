#include <stdio.h>

int main(int argc, char const *argv[]) {

  float side1, side2, side3, perimeter;

  printf("Give me the side 1 of the triangle \n");
  scanf("%f", &side1);

  printf("Give me the side 2 of the triangle \n");
  scanf("%f", &side2);

  printf("Give me the side 3 of the triangle \n");
  scanf("%f", &side3);

  perimeter = side1+side2+side3;
  printf("The perimeter is %f \n", perimeter );

  return 0;
}
