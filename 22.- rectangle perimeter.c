#include <stdio.h>

int main(int argc, char const *argv[]) {

  float side1, side2, perimeter;

  printf("Give me the longest side of the rectangle \n");
  scanf("%f", &side1);

  printf("Give me the shortest side of the rectangle \n");
  scanf("%f", &side2);

  perimeter = (side1*2)+(side2*2);
  printf("The perimeter is %f \n", perimeter );

  return 0;
}
